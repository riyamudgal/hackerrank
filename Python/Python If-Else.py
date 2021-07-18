'''Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of  2 to 5, print Not Weird
If  is even and in the inclusive range of 6 to 20, print Weird
If  is even and greater than 20, print Not Weird

Sample Input 1

24
Sample Output 1

Not Weird
Explanation 1


 n=24
 n>20 and  is even, so it is not weird.
 '''

import math
import os
import random
import re
import sys

var=int(input())
if(var%2!=0):
    print("Weird")
elif(var>=2 and var<=5):
    print("Not Weird")
elif(var>=6 and var<=20):
    print("Weird")
else:
    print("Not Weird")
