/*
Alice wants to send a message to Bob over an insecure channel. 
Eve is eavesdropper. Hence, Alice encrypts her message in the following way:

Assumptions 
Plaintext represents the original message. 
Ciphertext represents the encrypted message. 
The keys are used to encrypt the plaintext. 

Consider {A=0,B=1,⋯,Z=25}. 
There are no spaces, newlines or other punctuation symbols in plain text 

Key Generation : Alice chooses two keys K1,K2<26 and securely sends K1,K2 to Bob. 

Encryption : 
Encryption function is C=(P×K2)+K1 mod 26; where P is the plaintext and C is the ciphertext. 

Decryption : 
Decryption function is P=(C−K1)×K−12 mod 26; where P is the plaintext and C is the ciphertext; K−12 is the multiplicative inverse in GF(26) i.e. 1=K−12×K2 mod 26. 

Example: 

Plaintext : HELLOWORLD = {7 4 11 11 14 22 14 17 11 3} 
Keys : K1=3,K2=7. 
K−12=15 as 7×15=1 mod 26. 
Cipher Text: AFCCXBXSCY = {0 5 2 2 23 1 23 18 2 24} 

Assume Eve has captured a few ciphertexts. You need to write the decryption program such that with the given keys and the ciphertext it recovers the plaintext.

Desired input and output format: 

###Input:
AFCCXBXSCY
3
7

###Output:
HELLOWORLD

*/

//Code

#include <iostream>
using namespace std;

int main() {
	string str,str1;
	cin>>str;
	long long i,k1,k2,k2_inverse,x,m,j,ans;
	cin>>k1>>k2;
	k2_inverse=0;
	char ch;
	while((k2_inverse*k2)%26!=1)
	{
	    k2_inverse++;
	}
	i=0;
//	j=0;
	while(str[i]!='\0')
	{
	    x=str[i]-65;
	    m=(x-k1);
	    if(m<0)
	    {
	        m=m*-1;
	        ans=(m*k2_inverse)%26;
	        ans=26-ans;
	    }
	    else
	    {
	         ans=(m*k2_inverse)%26;
	    }
	    ans=ans+65;
	    ch=ans;
	    cout<<ch;
	   // str1[j]=ch;
	    i++;
	   // j++;
	}
	cout<<endl;
	return 0;
}
