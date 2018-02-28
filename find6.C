#include <stdio.h>

int main(void) {
	int a[10],i,n,k,count=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	if(i==k)
	{
	count++;

	}
	}
	printf("%d",count);
	
	
	return 0;
}
