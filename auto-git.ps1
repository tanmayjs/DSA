$repo = "N:\DSA"

Set-Location $repo

while ($true) {

    $changes = git status --porcelain

    if ($changes) {

        git add .

        $message = "Auto update: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"

        git commit -m $message

        git push

        Write-Host "GitHub updated successfully." -ForegroundColor Green
    }

    Start-Sleep -Seconds 10
}