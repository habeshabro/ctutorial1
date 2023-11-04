FROM gcc:latest
WORKDIR /app
COPY ./hello_world.c .
RUN gcc -o hello_world hello_world.c
CMD [ "./hello_world" ] 