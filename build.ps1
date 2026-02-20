& "$PSScriptRoot/check.ps1"
if ($LASTEXITCODE -ne 0) {
	Write-Error "Checks failed, aborting build."
	Pause
	exit $LASTEXITCODE
}

if(Test-Path "./meta/tools/hemtt/hemtt.exe")
{
	./meta/tools/hemtt/hemtt.exe build
}
else
{
	hemtt build
}

if($LASTEXITCODE -eq 0)
{
	Write-Output "Build successful"
	Pause
	exit $LASTEXITCODE
}
else
{
	Write-Error "Build failed, see HEMTT output for details"
	Pause
	exit $LASTEXITCODE
}
