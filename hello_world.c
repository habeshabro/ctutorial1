#include <stdio.h>

int main(void) {
    //prints out hello world in the command line
    char input[100];
    // Get input from the user.
    fgets(input, sizeof(input), stdin);
    scanf("%s", input);

    printf("Hello %s\n", input);
    return 0;
}