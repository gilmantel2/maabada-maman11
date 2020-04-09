#include <stdio.h>
#include "match.h"

#define MAX_PATTERN_LENGTH 100
#define MAX_TEXT_LENGTH 200

int main(){
    char cp[MAX_PATTERN_LENGTH], ct[MAX_TEXT_LENGTH];
    printf("\nEnter the pattern\n");
    gets(cp);
    printf("\nEnter the text\n");
    gets(ct);
    int index = best_match_index(cp, ct);
    printf("The best index is: %d\n", index);
}