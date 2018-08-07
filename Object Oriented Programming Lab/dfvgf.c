#include<stdio.h>
int main()
{
char a[1000];
int i,c=0;
printf ("Enter the string ");
scanf ("%s",&a);
for (i=0;a[i]!='\0';i++)
{
c++;
}
printf ("The length of string is %d",c);
}
