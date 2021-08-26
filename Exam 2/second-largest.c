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
    // else return 1 the character is a postive integer
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

// adds the character to the end of the numbers array (similar to append in python)
void append(int *numbers, char *c, int index)
{
    numbers[index - 1] = atoi(c);
}

void secondLargest (int *numbers,int *index, int len)
{
    int counter=0, max=0, max2=0;

    for (counter=0; counter < len; counter++)
    {
        //if the current element in the array is larger than current max
        // set max2 to current max and set max to the current element
        if (numbers[counter] > max)
        {
            max2 = max;
            max = numbers[counter];
        }
        else if ((numbers[counter] > max2) && (numbers[counter] < max) )
        {
            // if the current element is less than max but greater than max2
            // set max 2 equal to the current element and set index equal to counter
            max2 = numbers[counter];
            *index = counter;
        }
    }
}

int main(int argc,char *argv[])
{
    int counter, num, error=0, *numbers, index=0;

    // alocate memory to numbers array depending on number of command line arguments
    numbers = malloc(argc * sizeof(int));
    argc = argc - 1;
    if (argc >= 2)
    {
        for (counter=1; counter <= argc; counter++)
        {
            // checks that element in array is a digit. 
            // increments error if it is not a digit
            if (checkisnumber(argv[counter]) == 0)
            {
                error++;
            }
            // converts the argument to an integer and checks that it is a positive integer
            num = atoi(argv[counter]);
            // if it is not an integer increment error else add it to the numbers array
            if (validator(num) != 1)
            {
                error++;
            }
            else
            {
                // printf("%s ", argv[counter]);
                append(numbers, argv[counter], counter);
            }
            
        }
    }
    else
    {
        printf("Insufficient arguments provided\n");
        return 0;
    }
    

    // if no error occurs i.e. the input arguments are all valid
    // find the second largest and print it
    if (error == 0)
    {
        secondLargest(numbers, &index, argc);
        printf("%d\n", numbers[index]);
    }
    else
    {
        printf("Error: only positive integers are permitted.\n");
    }
    
    return 0;
}