#include <stdio.h>
#include "sequence.h"

const int MAX_LENGTH = 100;

int main(){
    char input[MAX_LENGTH];
    printf("\nEnter the string you would like to know the order of\n");
    scanf("%s", input);
    f_sequence(input);
    return 0;
}