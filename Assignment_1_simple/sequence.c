#include "sequence.h"
#include <stdio.h>

enum order f_sequence(const char sequence[]) {
    int i = 1, up = 0, down = 0, equal = 0;

    if(sequence[0] != '\0') {
        while (sequence[i] != '\0') {
            if (sequence[i] > sequence[i - 1])
                up = 1;
            else if (sequence[i] < sequence[i - 1])
                down = 1;
            else
               equal = 1;
            i++;
        }
    }

   if(up == 1 && down == 1) {
       printf("The sequence \"%s\" is non-monotonic\n", sequence);
       return NON_MONOTONE;
   }
   else if(up == 0 && down == 1 && equal == 0) {
       printf("The sequence \"%s\" is strictly decreasing\n", sequence);
       return STRICTLY_DECREASING;
   }
   else if(up == 0 && down == 1 && equal == 1) {
       printf("The sequence \"%s\" is decreasing\n", sequence);
       return DECREASING;
   }
   else if(up == 1 && down == 0 && equal == 0) {
       printf("The sequence \"%s\" is strictly increasing\n", sequence);
       return STRICTLY_INCREASING;
   }
   else {
       printf("The sequence \"%s\" is increasing\n", sequence);
       return INCREASING;
   }
}



