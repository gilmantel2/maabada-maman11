#include <stdio.h>
#include "sequence.h"

const char* getOrderName(enum order myOrder);
int check(enum order expected, const char sequence[]);

main() {
    int failedTests = 0;
   failedTests += check (STRICTLY_INCREASING, "123");
   failedTests += check (INCREASING, "");
   failedTests += check (INCREASING, "a");
   failedTests += check (INCREASING, "aa");
   failedTests += check (STRICTLY_INCREASING, "abc");
   failedTests += check (NON_MONOTONE, "bcca");
   failedTests += check (STRICTLY_DECREASING, "cba");
   failedTests += check (STRICTLY_DECREASING, "cb");
   failedTests += check (NON_MONOTONE, "cbab");
   failedTests += check (NON_MONOTONE, "bcda");
   failedTests += check (NON_MONOTONE, "babacbcb");
   failedTests += check (DECREASING, "bbba");
   failedTests += check (INCREASING, "bbbc");
   failedTests += check (NON_MONOTONE, "bbbca");
   failedTests += check (NON_MONOTONE, "bbbac");
   failedTests += check (STRICTLY_INCREASING, "demo");
   failedTests += check (INCREASING, "beef");
   failedTests += check (DECREASING, "spoon");
   failedTests += check (INCREASING, "zzz");
   failedTests += check (NON_MONOTONE, "suddenly");

    if(failedTests == 0)
        printf("ALL TESTS PASSED!\n");
}


const char* getOrderName(enum order myOrder)
{
    switch (myOrder)
    {
        case NONE: return "NONE";
        case STRICTLY_INCREASING: return "STRICTLY_INCREASING";
        case INCREASING: return "INCREASING";
        case STRAIGHT: return "STRAIGHT";
        case NON_MONOTONE: return "NON_MONOTONE";
        case DECREASING: return "DECREASING";
        case STRICTLY_DECREASING: return "STRICTLY_DECREASING";
        default: return "UNNAMED ORDER";
    }
}
int check(enum order expected, const char sequence[])
{
    if(f_sequence(sequence) != expected) {
        printf("--- TEST FAILED WITH: \"%s\", returned %s instead of %s\n", sequence, getOrderName(f_sequence(sequence)), getOrderName(expected));
        return 1;
    }

    //printf("The sequence '%s' is %s\n", sequence, getOrderName(expected));
    return 0;
}
