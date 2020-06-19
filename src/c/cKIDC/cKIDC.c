/*
version : v1.1.2-alpha

MIT License

Copyright (c) 2019-2020 Lee Kyung-ha <i_am@nulleekh.com>

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

int KIDC(int b0, int b1, int b2, int b3, int b4, int b5, int g, int r0, int r1, int r2, int r3, int n) {
    int s, i;

    s = b0 * 2;
    s += b1 * 3;
    s += b2 * 4;
    s += b3 * 5;
    s += b4 * 6;
    s += b5 * 7;

    s += g * 8;

    s += r0 * 9;
    s += r1 * 2;
    s += r2 * 3;
    s += r3 * 4;

    s += n * 5;

    for (i = 0; i <= s; i += 11);

    return (i-s) % 10;
}
