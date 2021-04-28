#include<iostream>
using namespace std;
void prime(int a,int b)
{
	int n,i=1,j=1,c1=0,c2=0;
	cin>>n;
	a=2;
	b=n-2;
	while(a<=n/2 && b>=n/2)
	{
	    c1=0;
	    c2=0;
	    i=1;
	    j=1;
		while(i<=a)
		{
			if(a%i==0)
			{
				c1++;
			}
			i++;
		}
	
		while(j<=b)
		{
			if(b%j==0)
			{
				c2++;
			}
			j++;
		}
		if(c1==2 && c2==2)
		{
			cout<<n<<"="<<a<<"+"<<b<<"\n";
		}

		    a++;
		    b--;
   }
}
	int main()
	{
		int n,a,b;
		cout<<"Enter a positive integer:";
		prime(a,b);
        return 0;
   }
