#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int validator(char* str)
{
    // checks that the binary number is of length 8 or less
    if (strlen(str) <= 8)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int bin_check(char* str)
{
    // iterates through each character of the string until it reaches the end
    // and checks if that only 1s and 0s are present
    int i = 0;
    char c = str[i];
    while (c != '\0')
    {
        if ( (c != '1') && (c != '0'))
        {
            return 0;
        }
        c = str[++i];
    }
    return 1;
}

void convert(int bin, int* dec)
{
    // void function finding the decimal version
    // of the provided binary number
    int tmp = 0, rem;
    while (bin != 0)
    {
        rem = bin % 10;
        bin = bin / 10;
        *dec = *dec + rem*pow(2,tmp);
        tmp++;
    }
}

int main (int argc, char *argv[])
{
    char dest[50];
    int counter, dec = 0, error = 0;

    // if statement check how many arguments are on the
    // command line. If there are only 2 then the binary number does
    // not need to be concatenated
    if (argc == 2)
    {
        if ( validator(argv[1]) == 1)
        {
            if (bin_check(argv[1]) == 1)
            {
                convert(atoi(argv[1]), &dec);
            }
            else
            {
                printf("Only digits 1 and 0 are permitted.\n");
                error++;
            }  
        }
        else
        {
            printf("Too many binary digits entered.\n");
            error++;
        }
        
    }
    else if (argc > 2)
    // else if more than 2 arguments were provided it requires concatenation
    {
        // loops through the array concatenating each element to one string
        // called dest
        for (counter = 1; counter < argc; counter++)
        {
            strcat(dest, argv[counter]);
        }

        if ( validator(dest) == 1)
        {
            if (bin_check(dest) == 1)
            {
                convert(atoi(dest), &dec);
            }
            else
            {
                printf("Only digits 1 and 0 are permitted.\n");
                error++;
            }
            
        }
        else
        {
            printf("Too many binary digits entered.\n");
            error++;
        }
    }

    // prints decimal number if no error occurs
    if (error == 0)
    {
        printf("%d\n", dec);
    }
    return 0;
}