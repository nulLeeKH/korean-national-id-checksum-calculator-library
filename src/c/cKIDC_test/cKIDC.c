#include "cKIDC.h"

#include <stdio.h>
#include <stdlib.h>

long KIDC(char birth[6], char gender, char region[4], char regNo) {
    long b0, b1, b2, b3, b4, b5, g, r0, r1, r2, r3, n, sum, i;

    b0 = (birth[0] - '0') * 2;
    b1 = (birth[1] - '0') * 3;
    b2 = (birth[2] - '0') * 4;
    b3 = (birth[3] - '0') * 5;
    b4 = (birth[4] - '0') * 6;
    b5 = (birth[5] - '0') * 7;

    g = (gender - '0') * 8;

    r0 = (region[0] - '0') * 9;
    r1 = (region[1] - '0') * 2;
    r2 = (region[2] - '0') * 3;
    r3 = (region[3] - '0') * 4;

    n = (regNo - '0') * 5;

    sum = b0+b1+b2+b3+b4+b5+g+r0+r1+r2+r3+n;

    for (i=0; i<=sum; i+=11);

    return (i-sum)%10;
}