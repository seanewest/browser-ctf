#!/usr/bin/env bash

docker build challenges -f challenges/Dockerfile.collection -t challenges
docker build challenges/osint -f challenges/osint/Dockerfile -t osint
docker build challenges/osint2 -f challenges/osint2/Dockerfile -t osint2
docker build challenges/pass -f challenges/pass/Dockerfile -t pass
docker build challenges/buf -f challenges/buf/Dockerfile -t buf
docker build challenges/story -f challenges/story/Dockerfile -t story
docker build challenges/socialeng -f challenges/socialeng/Dockerfile -t socialeng

#nohup node server.js >/dev/null 2>&1  &
#nohup node_modules/.bin/budo index.js -P -p 80 >/dev/null 2>&1 &
