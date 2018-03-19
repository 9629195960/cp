#include <stdio.h>

int main(void) {
int a[5],i,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
	if(a[i]%2!=0)
	{
		printf("%d",a[i]);
	}
}
return 0;
}
