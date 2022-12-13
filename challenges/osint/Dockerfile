FROM buildpack-deps:jessie
RUN apt-get update && apt-get install -y --force-yes vim less

COPY osint.c /osint/osint.c
WORKDIR /osint

RUN gcc -std=gnu11 osint.c -o osint && rm osint.c
