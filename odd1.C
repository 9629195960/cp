#include<stdio.h>
int main(void){
	int a=1,b=8,i;
	printf("%d%d",a,b);
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2!=0)
		{
			printf("odd number",i);
		}
		else
		{
			printf("not odd number",i);
		}
	}
	return 0;
	
}
