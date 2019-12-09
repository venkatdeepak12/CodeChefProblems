/*

Chef decided to write an infinite sequence.
Initially, he wrote 0, and then he started repeating the following process:

Look at the last element written so far (the l-th element if the sequence has length l so far); 
let's denote it by x.
If x does not occur anywhere earlier in the sequence, the next element in the sequence is 0.
Otherwise, look at the previous occurrence of x in the sequence,
i.e. the k-th element, where k<l, this element is equal to x and all elements between the k+1-th and l−1-th are different from x. 
The next element is l−k, i.e. the distance between the last two occurrences of x.
The resulting sequence is (0,0,1,0,2,0,2,2,1,…): the second element is 0 since 0 occurs only once in the sequence (0),
the third element is 1 since the distance between the two occurrences of 0 in the sequence (0,0) is 1,
the fourth element is 0 since 1 occurs only once in the sequence (0,0,1), and so on.

Chef has given you a task to perform.
Consider the N-th element of the sequence (denoted by x) and the first N elements of the sequence.
Find the number of occurrences of x among these N elements.

Example Input
1
2

Example Output
2

Explanation
Example case 1: The 2-nd element is 0. 
                It occurs twice among the first two elements, 
                since the first two elements are both 0.
                
*/

//Code:

#include <iostream>
using namespace std;
int check(int a[],int n,int k)
{
    int i;
    for(i=k-1;i>=0;i--)
    {
        if(a[i]==n)
        {
            return i;
        }
    }
    return 0;
}
int countnumber(int a[],int n,int k)
{
    int c=0,i;
    for(i=0;i<=k;i++)
    {
        if(a[i]==n)
        {
            c++;
        }
    }
    return c;
}
int main() {
	int t,n,i,j,seq[130],count[130];
	cin>>t;
	seq[0]=-1;
	seq[1]=0;
	for(i=2;i<130;i++)
	{
	    if(check(seq,seq[i-1],i-1)==0)
	    {
	        seq[i]=0;
	    }
	    else
	    {
	      seq[i]=(i-1)-check(seq,seq[i-1],i-1);  
	    }
	}
	for(i=0;i<130;i++)
	{
	    count[i]=countnumber(seq,seq[i],i);
	}
	
   // for(i=0;i<129;i++) cout<<seq[i]<<" ";
   while(t--)
   {
       cin>>n;
       cout<<count[n]<<endl;
       
   }
	return 0;
}
