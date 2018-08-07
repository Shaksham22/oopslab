#include<stdio.h>

void copy(int ar[],int ar1[],int i)
{
	ar1[i]=ar[i];
	if(ar[i]=='\0')
	return;
	copy(ar,ar1,i+1);
}
int main()
{
	int ar[5],ar1[5];
	for(int x=0;x<5;x++)
	{
		scanf("%d",&ar[x]);
	}
	copy(ar,ar1,0);
	printf("\n%d",ar);
	printf("\n%d",ar1);
	return 0;
}
