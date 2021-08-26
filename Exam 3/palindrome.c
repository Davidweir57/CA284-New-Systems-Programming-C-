#include <stdio.h> 
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>
  
void isPalindrome(char str[]);

int validate(char str[]);

int main() 
{ 
    char *string;
    string = (char *) malloc(300);
    //promt the user for a string
    printf("Please enter a string:  \n");
    // assign the input to char string
    fgets(string, 300, stdin);
    strtok(string, "\n");
    // call validate function
    validate(string);
    // call is palindrome function
    isPalindrome(string);
    return 0; 
}

void isPalindrome(char str[])
{
    // sets start to the beginning of str and end to the last charatcer
    int start=0, end=0;
    char s1, e1;
    end = strlen(str) - 1;

    while (start < end)
    {   
        // checks if the start or end characters are punctuation or whitespace and skips if so
        while ((!ispunct(str[start]) == 0) || (!isspace(str[start]) == 0))
        {
            start++;
        }
        
        while ((!ispunct(str[end]) == 0) || (!isspace(str[end]) == 0))
        {
            end--;
        }

        // converts all uppercase characters lowercase for comparison
        if (str[start] >= 'A' && str[start] <= 'Z')
        {
            s1 = str[start] + 32;
        }
        else
        {
            s1 = str[start];
        }


        if (str[end] >= 'A' && str[end] <= 'Z')
        {
            e1 = str[end] + 32;
        }
        else
        {
            e1 = str[end];
        }
        
        // if the start and end characterrs are not equal it is not a palindrome
        if (s1 != e1)
        {
            printf("This string is not a palindrome.\n");
            return;
        }
        // else continue iterating
        start++;
        end--;
    }
    //
    printf("This string is a palindrome.\n");
}

int validate(char str[])
{
    int i=0;

    // if there is an integer character print an error and exit program
    for (i=0; i < strlen(str); i++)
    {
        if(isdigit(str[i]))
        {
            printf("Invalid input: Numbers not permitted.\n");
            exit(0);
        }
    }

    return 0;
}