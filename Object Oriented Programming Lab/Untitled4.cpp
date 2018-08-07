#include <stdio.h>
int main ()
{
	int n,i,a=0,d;
	scanf ("%d",&n);
	for (i=n;n!=0;)
	{
		d=n%10;
		a=a*10+d;
		n=n/10;
	}
	printf ("%d",a);
}
