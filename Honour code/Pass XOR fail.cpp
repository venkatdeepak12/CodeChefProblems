/*

Pappu wants to attend the Machine Learning workshop at Pravega. 
However, the tickets are sold out, and the only way to get in is to get an X-clusive VIP Pass. 
To get that, Pappu needs to pass a test: he will be given a single non-negative integer R and he will have to reply with the XOR 
(exclusive or) of all the integers between 0 and R, including R.

Can you help Pappu pass the test?

Sample Input 1:
2


Sample Output 1:
3


EXPLANATION:
Pappu has to return the XOR of 0,1 and 2 to pass the test. As 0⊕1⊕2=3, the output is 3.

Sample Input 2:
4


Sample Output 2:
4

*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main() {
    string str;
    long long i,j,n;
    cin>>str;
    i=str.length();
    if(i==1)
    {
        n=(str[i-1]-'0');
    }
    else
    {
    n=str[i-2]-'0';
    n=n*10;
    n+=str[i-1]-'0';
    //cout<<"n= "<<n<<endl;
    }
    if(n%4==0)
    {
        cout<<str;
    }
    else if(n%4==1)
    {
        cout<<"1";
    }
    else if(n%4==2)
    {
        str[i-1]=((str[i-1]-'0') +1)+'0';
        cout<<str;
    }
    else
    {
        cout<<"0";
    }
	// your code goes here
	return 0;
}
