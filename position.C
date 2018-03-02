#include <stdio.h>

int main(void) {
	int a[10],k,n,i;
	scanf("%d %d",&n,&k);
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
