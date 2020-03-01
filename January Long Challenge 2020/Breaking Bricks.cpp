/*
For her next karate demonstration, Ada will break some bricks.

Ada stacked three bricks on top of each other. Initially, their widths (from top to bottom) are W1,W2,W3.

Ada's strength is S. Whenever she hits a stack of bricks, 
consider the largest k≥0 such that the sum of widths of the topmost k bricks does not exceed S;
the topmost k bricks break and are removed from the stack. Before each hit, Ada may also decide to reverse the current stack of bricks, with no cost.

Find the minimum number of hits Ada needs in order to break all bricks if she performs the reversals optimally. 
You are not required to minimise the number of reversals.

Example Input
3
3 1 2 2
2 1 1 1
3 2 2 1

Example Output
2
2
2

Explanation
Example case 1: Ada can reverse the stack and then hit it two times. Before the first hit, the widths of bricks in the stack 
                (from top to bottom) are (2,2,1). After the first hit, the topmost brick breaks and the stack becomes (2,1).
                The second hit breaks both remaining bricks.

                In this particular case, it is also possible to hit the stack two times without reversing. 
                Before the first hit, it is (1,2,2). The first hit breaks the two bricks at the top 
                (so the stack becomes (2)) and the second hit breaks the last brick.
*/

//Code:

#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
	fast;
	ll t,n,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y>>z;
	    if(x+y+z<=n)
	    {
	        cout<<"1\n";
	    }
	    else if(x+y<=n || y+z<=n)
	    {
	        cout<<"2\n";
	    }
	    else
	    {
	        cout<<"3\n";
	    }
	}
	return 0;
}
