FROM buildpack-deps:jammy
RUN apt-get update && apt-get install -y vim less

COPY pass.c /pass/pass.c
WORKDIR /pass

RUN gcc -std=gnu11 pass.c -o pass && rm pass.c
