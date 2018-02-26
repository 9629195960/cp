#include <stdio.h>

int main(void) {
char a[5];
int i;
for(i=1;i<=5;i++)
{
scanf("%c",&a[i]);
if(i%2==0)
{
	printf("%c",a[i]);
}
}
for(i=1;i<=5;i++)
{
if(i%2!=0)
{
	printf("%c",a[i]);
}
}
	return 0;
}
