/*
.Darshan hates Mondays, Tuesdays, Saturdays, and Sundays. He loves Wednesdays, Thursdays, and Fridays. 
There are N college days left before the exams.Every day of the N days is a working college day even if it is a Sunday. 
Since he has to prepare for the exams,
he is going to bunk all of the college days. What is the probability that he bunks on at least one of his favorite days?

Sample Input: 
1
7

Sample Output:
1.000000

EXPLANATION:
In a week, there is one Wednesday, which is enough to satisfy the condition.

*/
//Code:

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	long long t;
	double n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n>=5)
	    {
	        cout<<fixed<<setprecision(6)<<n/n<<endl;
	    }
	    else if(n==1)
	    {
	        x=(3.0/7.0);
	        cout<<fixed<<setprecision(6)<<x<<endl;
	    }
	    else if(n==2)
	    {
	        x=(4.0/7.0);
	        cout<<fixed<<setprecision(6)<<x<<endl;
	    }
	    else if(n==3)
	    {
	        x=(5.0/7.0);
	        cout<<fixed<<setprecision(6)<<x<<endl;
	    }
	    else 
	    {
	        x=(6.0/7.0);
	        cout<<fixed<<setprecision(6)<<x<<endl;
	    }
	    
	    
	}
	return 0;
}
