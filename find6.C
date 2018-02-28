#include <stdio.h>

int main(void) {
	int a[10],i,n,k;
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
		printf("%d",a[i]);

	}
	}
	
	
	return 0;
}
