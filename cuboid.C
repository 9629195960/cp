#include<stdio.h>
int main()
{
int l,b,h,surface,volume;
scanf("%d %d %d",&l,&b,&h);
surface=2*((l*b)+(b*h)+(l*h));
volume=l*b*h;
printf("%d",surface);
printf("%d",volume);
return 0;
}
