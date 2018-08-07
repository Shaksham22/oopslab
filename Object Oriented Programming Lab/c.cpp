#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i,j;
	for(i=1000;i<=9999;i++)
	{
		int s=sqrt(i);
		if ((s*s)==i)
		{
			n=i;
			int first=n%10;
			n=n/10;
			int second=n%10;
			n=n/10;
			int third=n%10;
			n=n/10;
			int fourth=n;
			if (first==second &&third==fourth)
			{
				printf ("%d",i);
			}
		}
	}
}
