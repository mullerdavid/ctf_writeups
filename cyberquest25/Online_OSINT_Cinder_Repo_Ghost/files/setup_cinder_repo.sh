#!/usr/bin/env bash
set -euo pipefail

NOTE=$(printf 'dGtuMTogUEg0TlQwTQ==' | base64 -d)
STASHW=$(printf 'dGtuMjogMU5EM1g='   | base64 -d)
TAGW=$(printf 'dGtuMzogMFIxRzFO'     | base64 -d)

ROOT="$(pwd)/cinder_repo_ghost"
rm -rf "$ROOT"; mkdir -p "$ROOT"; cd "$ROOT"

git init -q
git config user.name  cinder
git config user.email cinder@example.local

printf 'Ghost index demo\n' > README.md
printf 'Follow the order in HACKING.md: NOTE → STASH → TAG\nTokens appear as: tkn1/tkn2/tkn3\n' > HACKING.md
git add . && git commit -qm 'init'

printf 'minor\n' > t.txt
git add t.txt && git commit -qm 'tweak'

BRANCH="$(git symbolic-ref --short HEAD 2>/dev/null || git rev-parse --abbrev-ref HEAD)"

TARGET="$(git rev-parse HEAD)"
printf '%s\n' "$NOTE" | git notes add -F - "$TARGET"

printf 'tmp (%s)\n' "$STASHW" > k.tmp
git add -A
git stash push -m 'wip' -k -u >/dev/null
git reset --hard -q
rm -f k.tmp

git checkout --orphan g -q
git rm -rq . >/dev/null 2>&1 || true
printf 'orphan\n' > o.md
git add o.md && git commit -qm 'orphan'
git tag -a z -m "$TAGW"

git checkout -q "$BRANCH"
printf 'Order: NOTE -> STASH -> TAG\n' >> HACKING.md
git add HACKING.md && git commit -qm 'docs'

echo "OK: $ROOT"
