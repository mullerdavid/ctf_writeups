$ErrorActionPreference='Stop'

$a = 'dGtuMTogUEg0TlQwTQ=='
$b = 'dGtuMjogMU5EM1g='
$c = 'dGtuMzogMFIxRzFO'
$NOTE  = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String($a))
$STASH = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String($b))
$TAG   = [System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String($c))

$R= Join-Path (Get-Location) 'cinder_repo_ghost'
if(Test-Path $R){Remove-Item -Recurse -Force $R}; New-Item -Type Directory $R|Out-Null; Set-Location $R

git init -q
git config user.name  cinder
git config user.email cinder@example.local

'Ghost index demo'|Out-File -Encoding utf8 README.md
'Follow the order in HACKING.md: NOTE → STASH → TAG'|Out-File -Encoding utf8 HACKING.md
git add .; git commit -qm 'init'

'minor'|Out-File -Encoding utf8 t.txt; git add t.txt; git commit -qm 'tweak'

$branch = (git symbolic-ref --short HEAD) 2>$null
if(-not $branch){ $branch = (git rev-parse --abbrev-ref HEAD).Trim() }

$t=(git rev-parse HEAD).Trim(); git notes add -m "$NOTE" $t

"tmp ($STASH)"|Out-File -Encoding utf8 k.tmp; git add -A; git stash push -m 'wip' -k -u |Out-Null
git reset --hard -q; Remove-Item k.tmp -Force -ErrorAction SilentlyContinue

git checkout --orphan g -q
Remove-Item * -Recurse -Force -ErrorAction SilentlyContinue
'orphan'|Out-File -Encoding utf8 o.md; git add o.md; git commit -qm 'orphan'
git tag -a z -m "$TAG"

git checkout -q $branch
'Order: NOTE -> STASH -> TAG'|Out-File -Encoding utf8 -Append HACKING.md
git add HACKING.md; git commit -qm 'docs'
Write-Host 'OK:' $R
