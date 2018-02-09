#include <stdio.h>

int main(void) {
int n,rem=0,t,sum;
scanf("%d",&n);
t=n;
while(n!=0)
{
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
}
if(t==sum)
{
	printf("palindrome");
}
else
{
	printf("not palindrome");
}
	return 0;
}
