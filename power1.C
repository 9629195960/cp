#include <stdio.h>

int main(void) {
int i,n,a,b,sum=1;
scanf("%d %d",&a,&b);
for(i=1;i<=b;i++)
{
	sum=a*sum;
	
}
printf("%d",sum);
	return 0;
}
