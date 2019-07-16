/*
version : v1.0.0-alpha

MIT License

Copyright (c) 2019 nulLeeKH <i_am@nulleekh.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
 */

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