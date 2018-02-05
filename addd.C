#include <stdio.h>

int main(void) {
	int i,n,k,sum=0,count=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<=k;i++)
	{
		sum=sum+i;
		count++;
	}
	printf("%d",sum);
	return 0;
}
