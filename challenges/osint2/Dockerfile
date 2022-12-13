FROM buildpack-deps:jammy
RUN apt-get update && apt-get install -y vim less

COPY osint2.c /osint2/osint2.c
WORKDIR /osint2

RUN gcc -std=gnu11 osint2.c -o osint2 && rm osint2.c
