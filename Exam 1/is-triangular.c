#include <stdio.h>
#include <math.h>

int is_triangular(int user_input)
{
    float formula, fvar;
    int intvar;
    formula = (8 * user_input) + 1; /*The formula to see if a number is triangular (formula should be a square)*/

    fvar = sqrt((double)formula); /* gets the root of formula in float, sets intvar to be the fvar as int */
    intvar = fvar;

    /*Checks to see if the float is equal to int i.e. fvar is a perfect square*/
    if (intvar == fvar) {
        printf("%i is a triangular number.\n", user_input);
    }
    else {
        printf("%i is not a triangular number.\n", user_input);
    }

    return 0;
}

int main(int argc, char** argv)
{
    /* Scans in the users integer input and passes
       it to the is_triangular function */
    int user_input;
    
    sscanf(argv[1], "%d", &user_input);
    is_triangular(user_input);
    
    return 0;
}