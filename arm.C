#include <stdio.h>

int main(void) {
	int i,n,count=0,rem,sum=0;
	scanf("%d",&n);
	i=n;
	while(n!=0)
	{
		rem=n%10;
		count++;
		n=n/10;
		sum=sum+rem*rem*rem;
	}
	if(sum==i)
	{
		printf("armstrong");
	}
	else
	{
		printf("not armstrong");
	}
	return 0;
}
