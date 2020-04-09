#include <stdio.h>
#include "sequence.h"


int main(){
    char cp[101];
    printf("\nEnter the string you would like to know the order of\n");
    gets(cp);
    switch (f_sequence(cp)) {
        case STRICTLY_INCREASING:
            printf("The string is strictly increasing!\n");
            break;
        case INCREASING:
            printf("The string is increasing!\n");
            break;
        case NON_MONOTONE:
            printf("The string has no particular order!\n");
            break;
        case DECREASING:
            printf("The string is decreasing!\n");
            break;
        case STRICTLY_DECREASING:
            printf("The string is strictly decreasing!\n");
            break;
        default:
            printf("An error has occurred!\n");
    }
    return 0;
}