#include <stdlib.h>
#include <stdio.h>

#define LOOPS 100
#define MAXSIZE 256

int main(int argc, char **argv)
{
    int count = 0;
    char *pointers[LOOPS];  

    for (count = 0; count < LOOPS; count++)
    {
        pointers[count] = (char *)malloc(sizeof(char) * MAXSIZE);
    }

    for (count = 0; count < LOOPS; count++)
    {
        free(pointers[count]);
    }

    return 0;
}
