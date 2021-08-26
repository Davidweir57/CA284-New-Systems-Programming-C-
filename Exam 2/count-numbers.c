#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int validator(int num)
{
    // Checks that array element is not negative
    if ((num < 0))
    {
        return 0;
    }
    else if (num == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int checkisnumber(char* p) {
    // iterates through each character of the string until it reaches the end
    // and check if there is a letter in the string (e.g. 24q)
    // (ignoring "-" as we expect this is a negative number)
    int i = 0;
    char c = p[i];
    while (c != '\0') {
        if (c != '-')
            if (!isdigit(c))
                return 0;
        c = p[++i];
    }
    return 1;
}

int even_odd(int num)
{
    // checks if array element is even
    if (num % 2 == 0)
    {
        return 1;
    }
    // checks if array element is odd
    else
    {
        return 0;
    }
}

int prime(int num)
{
    // checks if array element is prime
    int n;

    for (n = 2; n <= num - 1; n++)
    {
        if (num % n == 0)
        {
            return 0;
        }
    }
    if (n == num)
    {
        return 1;
    }
}

int main(int argc, char *argv[])
{
    int counter = 0, ecount = 0, ocount = 0, pcount = 0;
    // checks that at least 1 command line argument was provided
    // i.e. the array is non-empty
    if (argc > 1)
    {

        // iterates through the array
        for (counter = 1; counter < argc; counter++)
        {
            int num, result;
            num = atoi(argv[counter]);

            // checks result of checkisnumber printing error and exiting program if a
            // non integer is found
            if (checkisnumber(argv[counter]) == 1)
            {
                result = validator(num); //stores result of validator
                // checks if the validator has found 
                // a positve integer, netagive integer or a letter
                if ( result == 1 )
                {
                    // Adds to count of evens, odds and primes
                    if (even_odd(num) == 1) 
                    {
                        ecount++;
                    }
                    else
                    {
                        ocount++;
                    }

                    if (prime(num) == 1)
                    {
                        pcount++;
                    }

                }
                // if negative integer is found return error and
                // exit program
                else if (result == 0)
                {
                    printf("Error: Only positive integers are permitted.\n");
                    return 0;
                }
            } 
            // if non-integer is found return error and
            // exit program
            else
            {
                printf("Error: only numbers are permitted.\n");
                return 0;
            }
        }

        // if only no error returned print results of the count
        printf("Number of odd numbers: %d\n", ocount);
        printf("Number of even numbers: %d\n", ecount);
        printf("Number of prime numbers: %d\n", pcount);
    }
    else
    {
        printf("insufficient command line arguments.\n");
    }
    return 0;
}