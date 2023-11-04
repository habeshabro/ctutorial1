#include <stdio.h>

int main(void) {
    //prints out hello world in the command line
    char fullName[100];
    // Get input from the user.
    printf("Enter your name:\n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s\n", fullName);
    return 0;
}