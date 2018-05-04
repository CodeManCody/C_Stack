#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    printf("What is your name?\n");

    char inputName[256];
    fgets(inputName, 256, stdin);
    inputName[strcspn(inputName, "\n")] = 0;

    printf("Hello %s!\n", inputName);
    
    return 0;
}
