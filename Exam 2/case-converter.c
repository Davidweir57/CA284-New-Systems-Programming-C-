#include <stdio.h>
#include <ctype.h>

void convert(char s[])
{
    int c = 0;
    // iterates through each character of the string until the end
    while (s[c] != '\0')
    {
        // checks if the character is uppercase
        if (s[c] >= 'A' && s[c] <= 'Z')
        {
            //if it is uppercase add 32 to the ascii value
            // giving us the ascii value for the lowercase letter
            // and updating the character in the string
            s[c] = s[c] + 32;
        }
        // checks if the character is lowercase
        else if (s[c] >= 'a' && s[c] <= 'z')
        {
            //if it is lowercase subtract 32 from the ascii value
            // giving us the ascii value for the uppercase letter
            // and updating the character in the string
            s[c] = s[c] - 32;
        }
        c++;
   }
}

int validate(char s[])
{
    int i=0, error=0;;
    // iterates through each character in the string until the end
    for (i = 0; s[i] != '\0'; i++)
    {
        // if the character is in the alphabet continue else
        // incremnet error count
        if(!isalpha(s[i]) == 0)
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

int main()
{
   char string[100];
   int error=0;
   
   // prompt the user for a string and store it in a char called string
   printf("Enter a string of upper and lower case letters\n");
   scanf("%s", string);
   
   // if no errors occur in validate i.e. it returns 1
   // convert the characters in the string else warn user of an error.
   if (validate(string) == 1)
   {
       convert(string);
       printf("%s\n", string);
   }
   else
   {
       printf("Invalid character entered.\n");
   }
 
   return 0;
}