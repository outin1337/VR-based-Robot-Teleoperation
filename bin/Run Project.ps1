# Define executables and their start info
$exe1Path = ".\IFE Prosjekt.exe"
$exe2Path = ".\robotControlTest.exe"

# Start the first executable and retain the process object
$process1 = Start-Process -FilePath $exe1Path -PassThru

# Introduce a delay before starting the second executable
Start-Sleep -Seconds 10

# Start the second executable and retain the process object
$process2 = Start-Process -FilePath $exe2Path -PassThru

# Wait for a key press to terminate the executables
Write-Host "Press any key to exit and close both executables..."
$null = $host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")

# Terminate both executables
Stop-Process -Id $process1.Id -Force
Stop-Process -Id $process2.Id -Force