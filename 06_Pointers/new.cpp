#include <iostream>
using namespace std;

int main()
{
    int n, m;

    // ---------------- SENDER ----------------
    cout << "Enter number of data bits: ";
    cin >> n;

    int data[n];

    cout << "Enter data bits: ";
    for (int i = 0; i < n; i++)
        cin >> data[i];

    cout << "Enter number of generator bits: ";
    cin >> m;

    int gen[m];

    cout << "Enter generator bits: ";
    for (int i = 0; i < m; i++)
        cin >> gen[i];

    int total = n + m - 1;
    int temp[total];

    // Add zeros
    for (int i = 0; i < n; i++)
        temp[i] = data[i];

    for (int i = n; i < total; i++)
        temp[i] = 0;

    // CRC division
    for (int i = 0; i < n; i++)
    {
        if (temp[i] == 1)
        {
            for (int j = 0; j < m; j++)
                temp[i + j] ^= gen[j];
        }
    }

    cout << "\nCRC: ";
    for (int i = n; i < total; i++)
        cout << temp[i];

    // Transmitted data = original data + CRC
    int transmitted[total];

    for (int i = 0; i < n; i++)
        transmitted[i] = data[i];

    for (int i = n; i < total; i++)
        transmitted[i] = temp[i];

    cout << "\nTransmitted data: ";
    for (int i = 0; i < total; i++)
        cout << transmitted[i];

    // ---------------- RECEIVER ----------------

    int received[total];

    cout << "\n\nEnter received data: ";
    for (int i = 0; i < total; i++)
        cin >> received[i];

    // CRC division at receiver
    for (int i = 0; i <= total - m; i++)
    {
        if (received[i] == 1)
        {
            for (int j = 0; j < m; j++)
                received[i + j] ^= gen[j];
        }
    }

    // Check remainder
    bool error = false;

    for (int i = 0; i < total; i++)
    {
        if (received[i] != 0)
        {
            error = true;
            break;
        }
    }

    if (error)
        cout << "Error detected!" << endl;
    else
        cout << "No error detected." << endl;

    return 0;
}