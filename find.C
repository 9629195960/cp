#include <stdio.h>

int main(void) {
	int a=1,b=10,n,i;
	printf("%d %d\n",a,b);
	scanf("%d",&n);
	printf("%d\n",n);
	for(i=a;i<=b;i++)
	{
		if(i==n)
		{
			printf("yes");
			break;
		}
		else
		{
			printf("no");
			break;
		}
	}
	
	return 0;
}
