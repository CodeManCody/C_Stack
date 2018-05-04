#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1_2.h"

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        printf("\nThis program expects a single command line argument.\n\n");
        return 0;
    }

    int userInt = atoi(argv[1]);
    char userInput[256];
    char userInputCopy[256];
    STACK* stack = MakeStack(userInt);

    for(int i=0; i<userInt; i++)
    {
        printf("> ");
        fgets(userInput, 256, stdin);
        userInput[strcspn(userInput, "\n")] = 0;
        strcpy(userInputCopy, userInput);
        char* nextToken = strtok(userInput, " ");
        int counter = 0;

        while(nextToken != NULL)
        {
            nextToken = strtok(NULL, " ");
            counter++;
        }
    
        if(counter == 1)
        {
            char* token1 = strtok(userInputCopy, " ");
            if(strcmp(token1, "pop") == 0)
            {
                int popReturn = Pop(stack);
                printf("%d\n", popReturn);
            }
        }

        if(counter == 2)
        {
            char* token2 = strtok(userInputCopy, " ");

            if(strcmp(token2, "push") == 0)
            {
                token2 = strtok(NULL, " ");
                int toPush = atoi(token2);
                Push(stack, toPush);
            }
        }
    }

    return 0;
}
