Cody Morgan

codymorgan89@gmail.com


prog1_1.c:

    I made a 256 char buffer to hold user input. User input was accomplished
    with fgets(), however, the "\n" char needed to be removed, which was
    accomplished with the use of strcspn(). After that, the correct string
    was printed to the console and the task complete.

prog1_2.h:

    In this file, the struct stack is declared, including member variables and
    function prototypes to make a stack such as Push, Pop, Grow, etc.

prog1_2.c:

    First, MakeStack() is defined by passing in the initialCapacity and
    allocating memory for the stack itself and the data that goes in it, and
    returning a STACK*. Push() gets defined by passing in the STACK* and the
    integer data. If the stack gets full, Grow() is called to allocate more
    space for the stack. Pop() does what it's supposed to, but returns -1 if
    the stack is empty. Grow() doubles the size of the stack by copying the
    data in the stack to a new array of twice the size. The old array gets 
    deleted without losing the elements to be copied in the new, larger array.

prog1_3.c:

    This driver program first checks if only 1 command line arg is entered.
    If so, that arg gets converted into an int. Then I made two buffers for
    user input, one of which is meant to be a copy of another. Then I call
    MakeStack() to have a stack to build on. Then I run a for loop N times
    based on the user command line input. Inside that loop, I use fgets() to
    get user input for each line, copying each string buffer into my copy
    buffer. Then I use strtok(), a while loop, and a counter variable to 
    seperate and count the number of tokens entered on each line of input. 
    If only 1 token was entered and it matches "pop" exactly using strcmp(),
    a value is popped off the stack. If two tokens were entered and the first
    token matches "push" exactly, the next token after that gets converted 
    to an int and that int value gets pushed onto the stack.
