#!/usr/bin/env bash

docker build . -t challenges
docker build . -f Dockerfile.osint -t osint
docker build . -f Dockerfile.pass -t pass
docker build . -f Dockerfile.buf -t buf

nohup node server.js >/dev/null 2>&1  &
nohup node_modules/.bin/budo index.js -P -p 80 >/dev/null 2>&1 &
