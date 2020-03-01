/*
"The secret impresses no one, the trick you use it for is everything." - The Prestige

This is an interactive problem.

An N-perfect number is defined as a positive integer with at most N digits (in decimal representation without leading zeros) ―
that is, X is an N-perfect number if 0<X<10N.

Chef has a friend named Dynamo, who is a legendary magician. Chef learned a new magic trick from him and now,
he wants to impress his friend Cheffa by showing her the trick:

First, Cheffa should choose a positive integer N and tell it to Chef.
Then, Cheffa should choose an N-perfect number A and tell it to Chef, who should then choose a positive integer S and tell it to Cheffa.
Then, Cheffa and Chef should alternately tell each other four N-perfect numbers B, C, D and E (in this order).
Cheffa chooses B and D, while Chef chooses C and E.
Cheffa will be really impressed if S turns out to be equal to A+B+C+D+E. Otherwise, 
Cheffa will be angry that Chef was wasting her time with a failed magic trick.

Since Chef is busy in the kitchen, you should perform the magic trick for him and impress Cheffa. 
The grader is acting as Cheffa and it is trying to make the magic trick fail.

Example
You             Grader
                1
                2
                10
50
                10
12
                10
8
                1
                
Explanation
Example case 1:  The sum of A=10, B=10, C=12, D=10 and E=8 is 50, which is the same as the predicted sum.

                  Note that this example is just supposed to clarify the interaction. 
                  The grader will not be as friendly.
*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace boost::multiprecision;
using namespace std;

int main() {
    fast;
    long long n,i;
	cpp_int t,s,a,b,c,d,e;
	cpp_int power[19]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000,100000000000,1000000000000,10000000000000,100000000000000,1000000000000000,10000000000000000,100000000000000000,1000000000000000000};
	cin>>t;
	while(t--)
	{
	    cin>>n>>a;
	    s=2*(power[n])+a;
	    cout<<s<<endl;
	    fflush(stdout);
	    cin>>b;
	    c=(power[n]-b);
	    cout<<c<<endl;
	    fflush(stdout);
	    cin>>d;
	    e=(power[n]-d);
	    cout<<e<<endl;
	    fflush(stdout);
	    cin>>i;
	}
	return 0;
}
