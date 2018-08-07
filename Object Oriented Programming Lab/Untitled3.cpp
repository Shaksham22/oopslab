#include <stdio.h>
int main ()
{
	int n,i,a=1;
	scanf ("%d",&n);
	for (i=0;i<=n;i++)
	{
		n=n/10;
		a++;
	}
	printf ("%d",a);
}
