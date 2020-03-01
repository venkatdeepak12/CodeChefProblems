'''
Xenon loves XORs and thus he has given his friend Subash a challenge to xor all values from L to R inclusive.
That is L⊕(L+1)⊕(L+2).....R=Z
Subash is on a date with his new girlfriend, will you be his helping hand to find Z?

Sample Input:
3  
0 8
2 2
3 6

Sample Output:
8   
2
4

EXPLANATION:
In testcase 1,
0⊕1⊕2⊕3⊕4⊕5⊕6⊕7⊕8 = 8

'''
#Code:

from operator import xor
def fun(n): 
	modulo = n % 4;
	if (modulo == 0): 
		return n
	elif (modulo == 1): 
		return 1
	elif (modulo == 2): 
		return n + 1
	elif (modulo == 3): 
		return 0
def findxor(l, r): 
	return (xor(fun(l - 1) ,fun(r)));
test=int(input())
while (test!=0):
    l,r=[int(x) for x in input().split()]
    print(findxor(l,r))
    test-=1
