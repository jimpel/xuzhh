#include <stdio.h>
void main()
{
	int n,i,s;
	for(n=1;n<=10000;n++)
	{
		s=0;
		for(i=1;i<n;i++)
			if(n%i==0)
				s+=i;
		if(n==s)
			printf("%d ",s);
	}

}