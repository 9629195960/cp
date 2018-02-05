#include <stdio.h>

int main(void) {
int n,i,fact=1,count=0;
scanf("%d",&n);
for(i=n;i>=1;i--)
{
	fact=fact*i;
	count++;
}
printf("%d",fact);
	return 0;
}
