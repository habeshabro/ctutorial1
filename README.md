# Baby's first c program

## C stuff
nothing to see here yet  
  
## docker stuff
I dockerized this sucker
To make the image:  
    `docker build -t docker-c-first .`  
To run a single use, self distructing container from this image:   
     `docker container run -it --rm --name hello-world docker-c-first`  