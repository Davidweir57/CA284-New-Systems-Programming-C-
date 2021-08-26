#include <stdio.h>
#include <ctype.h>

int validate(char str[])
{
    int i=0, error=0;;
    // iterates through each character in the string until the end
    for (i = 0; str[i] != '\0'; i++)
    {
        // if the character is in the alphabet continue else
        // incremnet error count
        if(!isalpha(str[i]) == 0)
        {
            continue;
        }
        else
        {
            error++;
        }        
    }
    // if error is 0 return 1
    // else if an error occurs return 0
    if (error == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int finder(char str[], char substr[])
{
    // function checks if the substring is present in the string
    int i=0, j=0;

    // we loop through the string and substring until we reach their ends
    while ( ((str[j]) != '\0') && ( ((substr[i]) != '\0') ) )
    {
        // if our index in substring is not equal to our index in the string we increment j moving on to the next index in the 1st string
        if ( (substr[i]) != (str[j]) )
        {
            j++;
        }
        // else they are the same we increment i and j to the next index in both string and substring
        else
        {
            i++;
            j++;
        }

    }

    // if we reach the end of the substring return 1 meaning the substring is present in string
    // else return 0 -> it was not found
    if ( (substr[i]) == '\0' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char str[50], substr[50];

    // prompt the user for the first string and 2nd substring
    printf("Enter the first string:\n");
    scanf("%s", str);
    if ( (validate(str) != 1))
    {
        printf("Invalid character entered\n");
        return 0;
    }

    printf("Enter the second string:\n");
    scanf("%s", substr);

    // if the substring consists only of upper and lower case letters we check if the substring is in the string
    // else tell the user that an character is invalid
    if ( (validate(str) == 1) && (validate(substr) == 1) )
    {
        // if finder = 1 tell the user the substring is present in the string
        // else tell the user the substring is not contained in the string
        if (finder(str, substr) == 1)
        {
            printf("the string '%s' is contained in the string '%s'\n", substr, str);
        }
        else
        {
            printf("the string '%s' is not contained in the string '%s'\n", substr, str);
        }
    }
    else
    {
        printf("Invalid character entered\n");
    }
    
    return 0;
}