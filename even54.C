#include <stdio.h>

int main(void) {
	int n,b,c;
	scanf("%d",&n);
	b=n-1;
	if(b%2==0)
	{
		printf("%d",b);
	}
	else
	{
		c=b-1;
		printf("%d",c);
	}
	return 0;
}
