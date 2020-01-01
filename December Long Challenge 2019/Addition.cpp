/*

Recently, Chef studied the binary numeral system and 
noticed that it is extremely simple to perform bitwise operations like AND, XOR or bit shift on non-negative integers,
while it is much more complicated to perform arithmetic operations (e.g. addition, multiplication or division).

After playing with binary operations for a while, 
Chef invented an interesting algorithm for addition of two non-negative integers A and B:

function add(A, B):
    while B is greater than 0:
        U = A XOR B
        V = A AND B
        A = U
        B = V * 2
    return A
Now Chef is wondering how fast this algorithm is. 
Given the initial values of A and B (in binary representation),
he needs you to help him compute the number of times the while-loop of the algorithm is repeated.

Example Input
3
100010
0
0
100010
11100
1010


Example Output
0
1
3


Explanation
Example case 1: The initial value of B is 0, so while-loop is not performed at all.

Example case 2: The initial values of A and B are 02=0 and 1000102=34 respectively.
                When the while-loop is performed for the first time, we have:

                U=34
                V=0
                A changes to 34
                B changes to 2⋅0=0
                The while-loop terminates immediately afterwards, so it is executed only once.

Example case 3: The initial values of A and B are 111002=28 and 10102=10 respectively. 
                After the first iteration, their values change to 22 and 16 respectively. 
                After the second iteration, they change to 6 and 32, and finally, after the third iteration, to 38 and 0.
                
 */
 
 //Code:
 
 #include <iostream>
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll cpp_int
#define l long long
#define pb push_back
#define pf pop_front
using namespace boost::multiprecision;
using namespace std;

ll binary(string s)
{
    l i=0,temp,len;
    ll base=1,ans=0;
    len=s.length();
    
    for(i=len-1;i>=0;i--)
    {
        temp=s[i]-'0';
        ans+=(temp*base);
        base=base*2;
        
    }
    return ans;
}

ll add(ll num1,ll num2)
{
    ll count=0,u,v;
    while(num2>0)
    {
        u= num1 ^ num2;
        v= num1 & num2;
        num1= u;
        num2= v * 2;
        count++;
    }
    return count;
}
int main() {
    fast;
    l t,n;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        ll num1,num2,ans;
        if(a[0]=='-')
        {
            a[0]='0';
        }
        if(b[0]=='-')
        {
            b[0]='0';
        }
        num1=binary(a);
        num2=binary(b);
        //cout<<num1<<" "<<num2<<endl;
        ans= add(num1,num2);
        cout<<ans<<"\n";
    }
	return 0;
}
