while($true)
{
	$Response = Invoke-WebRequest -URI https://74bdad0abe1b29e725ce3e4a9a6db549395e5ec8.next.avatao-challenge.com/api/get_hash
	$Obj = ConvertFrom-Json $Response.Content
	Write-Host $Obj
	.\hashcat.exe -a 3 -m 10 -w 4 "$($Obj.hash):$($Obj.salt)" -i ?1?1?1?1?1?1?1?1?1?1?1?1 -1 "$($Obj.salt)"
	$Crack = .\hashcat.exe -a 3 -m 10 -w 4 "$($Obj.hash):$($Obj.salt)" -i ?1?1?1?1?1?1?1?1?1?1?1?1 -1 "$($Obj.salt)" --show
	$Crack = $Crack.Split(":")[2]
	Write-Host $Crack
	$postParams = @{password=$Crack}
	Invoke-WebRequest -Uri https://74bdad0abe1b29e725ce3e4a9a6db549395e5ec8.next.avatao-challenge.com/api/submit_pw -Method POST -Body $postParams
}