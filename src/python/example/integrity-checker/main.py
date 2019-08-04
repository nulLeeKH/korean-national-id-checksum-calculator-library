"""
version : v1.1.2-alpha

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
"""

import sys
import re
import pyKIDC

print("Please enter the entire national-id number.")
idInput = input("national-id : ")
idTemp = re.findall("\d", idInput)

if len(idTemp) != 13:
    print("There is a problem with length of ID number.")
    sys.exit()

id = []
for i in range(13):
    id.append(int(idTemp[i]))

print("\n")

if pyKIDC.KIDC(id[0], id[1], id[2], id[3], id[4], id[5], id[6], id[7], id[8], id[9], id[10], id[11]) == id[12] :
    print("Result : There is no problem with ID number.");
else :
    print("Result : There is a problem with ID number.");

sys.exit()
