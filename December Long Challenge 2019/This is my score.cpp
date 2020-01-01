/*
You are participating in a contest which has 11 problems (numbered 1 through 11). 
The first eight problems (i.e. problems 1,2,…,8) are scorable, 
while the last three problems (9, 10 and 11) are non-scorable ― this means that any submissions you make on any of 
these problems do not affect your total score.

Your total score is the sum of your best scores for all scorable problems.
That is, for each scorable problem, 
you look at the scores of all submissions you made on that problem and take the maximum of these scores
(or 0 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took.

You know the results of all submissions you made. Calculate your total score.

Example Input
2
5
2 45
9 100
8 0
2 15
8 90
1
11 1

Example Output
135
0

Explanation
Example case 1: The scorable problems with at least one submission are problems 2 and 8.
                For problem 2, there are two submissions and the maximum score among them is 45. 
                For problem 8, there are also two submissions and the maximum score is 90. Hence, the total score is 45+90=135.

Example case 2: No scorable problem is attempted, so the total score is 0.

*/

//Code:

#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define pb push_back
#define pf pop_front
using namespace std;

int main() {
	ll t,n,index,value,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector <int> a(9,0);
	    //for(i=0;i<=9;i++){cout<<a[i]<<" ";}cout<<endl;
	    
	    for(i = 0; i < n ; i++)
	    {
	        cin>>index>>value;
	        if(index<9)
	        {
	            if(a[index]<value)
	            {
	                //cout<<a[index]<<" "<<value;
	                a[index]=value;
	                //cout<<a[index]<<" ";
	            }
	        }
	        //cout<<endl;
	    }
	    //cout<<endl;
	    ll sum=0;
	    for(i = 1; i <= 8; i++)
	    {
	        //cout<<a[i]<<" "; 
	        sum+=a[i];
	    }
	    cout<<sum<<"\n";
	 
	}
	return 0;
}
