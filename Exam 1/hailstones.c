#include <stdio.h>

int hailstone(int n)
{
    /* function finds the next number in the sequence */
    /* if n is even */
    if (n % 2 == 0)
    {
        n = n / 2;
    }
    /* if n is odd */
    else
    {
        n = 3 * n + 1;
    }
    
    return n;
    
}

int main(int argc, char** argv)
{
    int user_input, answer;

    /* reads in from command line */
    sscanf(argv[1], "%d", &user_input);
    answer = hailstone(user_input); /* calls first instance of hailstone */
    
    /* while hailstone does not return 1 print the next
       number in the sequence and pass this number back
       to the hailstone function */
    while (answer != 1)
    {
        printf("%d\n", answer);
        answer = hailstone(answer);
    }

    /* we exit this while loop when we reach 1, this checks that
       the last answer returned was 1 and outputs it */
   if (answer == 1)
   {
        printf("1\n");
   }

   return 0;
}