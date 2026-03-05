#include <string.h>
#include <math.h>

#define MIN(a,b) (((a)<(b))?(a):(b))

int minOperations(char * s) {
    int n = strlen(s);
    int changesForStart0 = 0;

    for (int i = 0; i < n; i++) {
        // Pattern 1: Expected character at index i is '0' if i is even, '1' if i is odd
        // This can be represented by (i % 2) as a character: '0' + (i % 2)
        char expected = (i % 2 == 0) ? '0' : '1';
        
        if (s[i] != expected) {
            changesForStart0++;
        }
    }

    // changesForStart1 is simply n - changesForStart0
    return MIN(changesForStart0, n - changesForStart0);
}