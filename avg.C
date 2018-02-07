#include <stdio.h>

int main(void) {
	int i,n,avg,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("%d",avg);
	return 0;
}
