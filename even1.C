#include<stdio.h>
int main(void){
	int a=1,b=8,i;
	printf("%d%d",a,b);
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			printf("even number",i);
		}
		else
		{
			printf("not even number",i);
		}
	}
	return 0;
	
}
