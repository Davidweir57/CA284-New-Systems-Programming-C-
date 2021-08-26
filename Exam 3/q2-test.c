#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int counter = 0, len=0;

     for (counter = 1; counter < argc; counter++)
        {
            len = strlen(argv[counter]);
            // printf("%s ", argv[counter]);
            // printf("\n");
            printf("%d ", len);
        }
    return 0;
}