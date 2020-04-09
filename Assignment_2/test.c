#include <stdio.h>
#include "match.h"


int check(int expected, const char pattern[], const char text[])
{
    int result = best_match_index(pattern, text);
    if(result != expected) {
        printf("--- TEST FAILED WITH pattern: \"%s\", text: \"%s\" ---- returned %d instead of %d\n", pattern, text, result, expected);
        return 1;
    }
    return 0;
}

main() {
    int failedTests = 0;
   failedTests += check (0, "a", "aaa");
   failedTests += check (0, "a", "bbb");
   failedTests += check (0, "a", "b");
   failedTests += check (0, "a", "a");
   failedTests += check (0, "abc", "abcde");
   failedTests += check (0, "abc", "abcabc");
   failedTests += check (0, "abc", "abdacb");
   failedTests += check (2, "abc", "bcabbc");
   failedTests += check (0, "abc", "addfs");
   failedTests += check (0, "abc", "bbc");
   failedTests += check (1, "abc", "bcacb");
   failedTests += check (1, "abc", "babc");
   failedTests += check (1, "abc", "cabcabc");
   failedTests += check (1, "abc", "fangfh");
   failedTests += check (0, "abc", "fbngfh");
   failedTests += check (2, "abc", "asabc");
   failedTests += check (2, "abc", "ababc");
   failedTests += check (2, "abc", "bcabc");
   failedTests += check (2, "abc", "dcabg");
   failedTests += check (12, "abcd", "gffdhgcdhbcdabcd");

    if(failedTests == 0)
        printf("ALL TESTS PASSED!\n");
}

