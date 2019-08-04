/*
Chef and Dhyey have become friends recently. Chef wants to test Dhyey's intelligence by giving him a puzzle to solve.

The puzzle contains an integer sequence A1,A2,…,AN. The answer to the puzzle is the maximum of Ai%Aj, taken over all valid i, j.

Help Dhyey solve this puzzle.

Example Input 
5  
1 2 3 4 5 
6
5 5 5 2 3 8

Example Output 
4
5
*/

//CODE:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,i,max;
	    cin>>n;
	    if(n>1)
	    {
	    long long a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]<1)
	        {
	            exit(0);
	        }
	    }
	    sort(a,a+n);
	    max=a[n-2];
	   while(a[n-1]==a[n-2])
	   {
	       n--;
	       if(n<2)
	       {
	        cout<<"0"<<endl;
	        exit(0);
	       }
	       max=a[n-2];
	   }
	    cout<<max<<endl;
	    }
	return 0;
}
