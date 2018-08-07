#include<stdio.h>
int main()
{
	int i,a,j=0,k,n;
	printf ("Enter the number ");
	scanf ("%d",&n);
	while (n!=0)
	{
		n=n/10;
		j++;
	}
	printf ("%d",j);
}
