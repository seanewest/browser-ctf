FROM buildpack-deps:jessie
RUN apt-get update && apt-get install -y --force-yes vim less

COPY challenges /challenges
WORKDIR /challenges

RUN gcc pass/pass.c -o pass/pass && rm pass/pass.c
RUN gcc -std=gnu11 buf/buf.c -o buf/buf
RUN gcc -std=gnu11 osint/osint.c -o osint/osint && rm osint/osint.c
