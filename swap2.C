#include <stdio.h>

int main(void) {
int a,d;
scanf("%d %d",&a,&d);
printf("before swapping :%d %d",a,d);
{
	a=a+d;
	d=a-d;
	a=a-d;
	printf("after swapping:%d %d",a,d);
}
	return 0;
}
