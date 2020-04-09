#include "sequence.h"

enum order f_sequence(const char sequence[]) {
    int state = NONE;

    if(sequence[0] != '\0') {
        int i = 1;
        while (sequence[i] != '\0') {
            if (sequence[i] > sequence[i - 1]) {
                if (state == NONE)
                    state = STRICTLY_INCREASING;
                else if (state == STRAIGHT)
                    state = INCREASING;
                else if (state == DECREASING || state == STRICTLY_DECREASING)
                    return NON_MONOTONE;
            } else if (sequence[i] < sequence[i - 1]) {
                if (state == NONE)
                    state = STRICTLY_DECREASING;
                else if (state == STRAIGHT)
                    state = DECREASING;
                else if (state == INCREASING || state == STRICTLY_INCREASING)
                    return NON_MONOTONE;
            } else {
                if(state == NONE)
                    state = STRAIGHT;
                else if (state == STRICTLY_INCREASING)
                    state = INCREASING;
                else if (state == STRICTLY_DECREASING)
                    state = DECREASING;
            }
            i++;
        }
    }

    if(state == NONE || state == STRAIGHT)
        return INCREASING;
    return state;
}



