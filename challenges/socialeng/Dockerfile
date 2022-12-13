FROM ubuntu:jammy
RUN apt-get update && apt-get install -y vim less openssl sudo

COPY greetings.txt /home/monica/greetings.txt
COPY flag /flag
RUN chown root:root /flag
RUN chmod 600 /flag


RUN useradd -ms /bin/bash monica
RUN useradd -ms /bin/bash jamie
RUN usermod -aG sudo jamie
RUN usermod -p `openssl passwd mango35` jamie

USER monica
WORKDIR /home/monica
