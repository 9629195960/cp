#include <stdio.h>

int main(void) {
  int i,n,count=0,rem;
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
  	while(n!=0)
  	{
  	rem=n%10;
  	count++;
  	n=n/10;
  	printf("%d",rem);
  	}
  
  }	
  
    
	return 0;
}
