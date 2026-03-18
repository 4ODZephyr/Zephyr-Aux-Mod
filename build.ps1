param (
	[switch]$SkipPause = $false
)

& "$PSScriptRoot/check.ps1" -SkipPause $true
if ($LASTEXITCODE -ne 0) {
	Write-Error "Checks failed, aborting build."
	if(-not $SkipPause)
	{
		Pause
	}
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
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
else
{
	Write-Error "Build failed, see HEMTT output for details"
	if(-not $SkipPause)
	{
		Pause
	}
	exit $LASTEXITCODE
}
