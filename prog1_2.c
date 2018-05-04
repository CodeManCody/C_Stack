#include "prog1_2.h"
#include <stdlib.h>

STACK* MakeStack(int initialCapacity)
{
    struct stack* oStack;
    oStack = (struct stack*) malloc(sizeof(struct stack));
    oStack->data = (int*) malloc(sizeof(int) * initialCapacity);
    oStack->capacity = initialCapacity;
    oStack->size = 0;

    return oStack;
}

void Push(STACK* stackPtr, int data)
{
    if(stackPtr->size >= stackPtr->capacity)
        Grow(stackPtr);

    stackPtr->data[stackPtr->size] = data;
    stackPtr->size++;
}

int Pop(STACK* stackPtr)
{
    if(stackPtr->size == 0)
        return -1;

    int data = stackPtr->data[(stackPtr->size) - 1];
    stackPtr->size--;

    return data;
}

void Grow(STACK* stackPtr)
{
    stackPtr->capacity *= 2;
    int* growData;
    growData = (int*)malloc(sizeof(int)*stackPtr->capacity);

    for(int i=0; i<stackPtr->size; i++)
    {
        growData[i] = stackPtr->data[i];
    }

    free(stackPtr->data);
    stackPtr->data = growData;
}
