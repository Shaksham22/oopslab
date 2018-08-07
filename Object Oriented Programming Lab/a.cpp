#include<stdio.h>
int main()
{
	int j,a;
	printf ("Enter the day ");
	scanf ("%d",&a);
	j=a%7;
	j=7-j;
	a=a+j;
	printf("%d",a);
}
