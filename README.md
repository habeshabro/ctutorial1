## Baby's first c program
nothing to see here
I dockerized this sucker
To make the image:
    docker build -t docker-c-first .
To run a single use, self distructing container from this image: 
     docker container run -t --rm --name hello-world docker-c-first