''''

Let's call a positive integer M a beautiful number if the following conditions are satisfied:

The decimal representation of M (without leading zeros) does not contain any zeros.
The sum of squares of all decimal digits of M is a perfect square.
For example, 1, 4 and 221 are beautiful, but 10 and 333 are not.

You are given a positive integer N.
Find the smallest N-digit beautiful number or determine that all N-digit integers are not beautiful.

Example Input
2
1
2

Example Output
1
34

Explanation
Example case 1:  It is obvious that 1 is the smallest beautiful number.

Example case 2:  34 is beautiful because 32+42=9+16=25=52.
                 On the other hand, we can prove that this is the smallest beautiful number.
                 
''''
#Code
# cook your dish here
Perfect=[1, 34, 122, 1111, 11123, 111112, 1111124, 11111113, 111111111, 1111111114, 11111111126, 111111111115, 1111111111112, 11111111111116, 111111111111128, 1111111111111111, 11111111111111113, 111111111111111118, 1111111111111111122, 11111111111111111119, 111111111111111111114, 1111111111111111111112, 11111111111111111111168, 111111111111111111111335, 1111111111111111111111111, 11111111111111111111111126, 111111111111111111111111222, 1111111111111111111111111113, 11111111111111111111111111116, 111111111111111111111111111122, 1111111111111111111111111111124, 11111111111111111111111111111135, 111111111111111111111111111111112, 1111111111111111111111111111111114, 11111111111111111111111111111111223, 111111111111111111111111111111111111, 1111111111111111111111111111111111118, 11111111111111111111111111111111111123, 111111111111111111111111111111111111245, 1111111111111111111111111111111111111115, 11111111111111111111111111111111111111113, 111111111111111111111111111111111111111145, 1111111111111111111111111111111111111111122, 11111111111111111111111111111111111111111137, 111111111111111111111111111111111111111111233, 1111111111111111111111111111111111111111111112, 11111111111111111111111111111111111111111111238, 111111111111111111111111111111111111111111111133, 1111111111111111111111111111111111111111111111111, 11111111111111111111111111111111111111111111111138, 111111111111111111111111111111111111111111111111144, 1111111111111111111111111111111111111111111111111117, 11111111111111111111111111111111111111111111111111123, 111111111111111111111111111111111111111111111111111125, 1111111111111111111111111111111111111111111111111111128, 11111111111111111111111111111111111111111111111111111113, 111111111111111111111111111111111111111111111111111111115, 1111111111111111111111111111111111111111111111111111111118, 11111111111111111111111111111111111111111111111111111111226, 111111111111111111111111111111111111111111111111111111111224, 1111111111111111111111111111111111111111111111111111111111112, 11111111111111111111111111111111111111111111111111111111111126, 111111111111111111111111111111111111111111111111111111111111124, 1111111111111111111111111111111111111111111111111111111111111111, 11111111111111111111111111111111111111111111111111111111111111116, 111111111111111111111111111111111111111111111111111111111111111114, 1111111111111111111111111111111111111111111111111111111111111111223, 11111111111111111111111111111111111111111111111111111111111111111135, 111111111111111111111111111111111111111111111111111111111111111111257, 1111111111111111111111111111111111111111111111111111111111111111111123, 11111111111111111111111111111111111111111111111111111111111111111111146, 111111111111111111111111111111111111111111111111111111111111111111111157, 1111111111111111111111111111111111111111111111111111111111111111111111113, 11111111111111111111111111111111111111111111111111111111111111111111111149, 111111111111111111111111111111111111111111111111111111111111111111111111122, 1111111111111111111111111111111111111111111111111111111111111111111111111115, 11111111111111111111111111111111111111111111111111111111111111111111111111134, 111111111111111111111111111111111111111111111111111111111111111111111111111112, 1111111111111111111111111111111111111111111111111111111111111111111111111111224, 11111111111111111111111111111111111111111111111111111111111111111111111111111226, 111111111111111111111111111111111111111111111111111111111111111111111111111111111, 1111111111111111111111111111111111111111111111111111111111111111111111111111111124, 11111111111111111111111111111111111111111111111111111111111111111111111111111111126, 111111111111111111111111111111111111111111111111111111111111111111111111111111111133, 1111111111111111111111111111111111111111111111111111111111111111111111111111111111114, 11111111111111111111111111111111111111111111111111111111111111111111111111111111111116, 111111111111111111111111111111111111111111111111111111111111111111111111111111111112227, 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111137, 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111119, 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111227, 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111144, 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111113, 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111127, 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111122, 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111234, 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111117, 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111112, 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111134, 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111166, 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111]
test=int(input())
while(test!=0):
    n=int(input())
    print(Perfect[n-1])
    test=test-1