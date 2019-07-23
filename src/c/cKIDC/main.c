/*
version : v1.1.0-alpha

MIT License

Copyright (c) 2019 Kyung-ha Lee <i_am@nulleekh.com>

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

#include <stdio.h>
#include "cKIDC.h"

int main() {
    printf("%d", KIDC(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1));
    // Calculation of checksum for male born on 11-Nov-1911 and registered first of the day in local code 1111

    /*
    The first through sixth arguments contain the date of birth in the order of YY-MM-DD.
    The seventh argument contains gender.
        1900s being 1 (male), 2 (female), and 2000s being 3 (male) and 4 (female)
    The eighth through eleventh argument contain the code of the area of birth and the code of registered office.
    The twelfth argument contains registered number from office.
    */

    return 0;
}
