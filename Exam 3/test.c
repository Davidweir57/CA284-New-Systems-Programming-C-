#include <stdio.h> 
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>
  
void isPalindrome(char str[]);

int validate(char str[]);

int main() 
{ 
    char *string;
    string = malloc(300 * sizeof(char));
    //promt the user for a string
    printf("Please enter a string:  \n");
    // assign the input to char string
    fgets(string, sizeof(string), stdin);
    strtok(string, "\n");
    validate(string);
    isPalindrome(string);
    return 0; 
}

void isPalindrome(char str[])
{
    // sets start to the beginning of str and end to the last charatcer
    int start=0, end=0;
    char s1, e1;
    // changes characters to lowercase
    end = strlen(str) - 1;

    while (start < end)
    {   
        if (!ispunct(str[start]) == 0)
        {
            start++;
        }
        
        if (!ispunct(str[end]) == 0)
        {
            end--;
        }

        if (!isspace(str[start]) == 0)
        {
            start++;
        }
        
        if (!isspace(str[end]) == 0)
        {
            end--;
        }

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

    for (i=0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]) == 1)
        {
            printf("Invalid input: Numbers not permitted.\n");
            return 1;
        }
    }

    // for (i=0; str[i] != '\0'; i++)
    // {
    //     if(ispunct(str[i]) == 0)
    //     {
    //         printf("jajn\n");
    //         return 1;
    //     }
    // }
    return 0;
}