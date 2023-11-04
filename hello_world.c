#include <stdio.h>

int main(void) {
    //prints out hello world in the command line
    char input[100];
    // Get input from the user.
    printf("Enter your name:\n");
    scanf("%s", input);

    printf("Hello %s\n", input);
    return 0;
}