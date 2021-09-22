/*
Sample Input
123 456
555 555
123 594
0 0
Sample Output
No carry operation.
3 carry operations.
1 carry operation.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	long int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		break;
		
		int count=0;
		int carry=0;
		while(a!=0||b!=0)
		{	
			carry=a%10+b%10+carry;
			carry/=10;
			a/=10;
			b/=10;
			if(carry!=0)
			count++;
		}
		if(count==0)
		cout<<"No carry operation"<<endl;
		else if(count==1)
		cout<<"1 carry operation"<<endl;
		else
		cout<<count<<" carry operation"<<endl;
	}
	return 0;
}

