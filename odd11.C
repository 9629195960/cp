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
	if(a[i]%2!=0)
	{
		count++;
	}
		if(count==k)
		{
		printf("%d\n",a[i]);
		break;
		}

	}
	
	
	
	return 0;
}
