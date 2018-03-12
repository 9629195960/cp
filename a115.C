#include <stdio.h>

int main(void) {
	int a[5],i,n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
	if(k==i)
	{
		printf("%d",a[i]);
	}
	}
	return 0;
}
