#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int counter, num, error=0, *numbers, index=0;

    // alocate memory to numbers array depending on number of command line arguments
    numbers = malloc(argc * sizeof(int));
    argc = argc - 1;
    printf("%d", argc);

}