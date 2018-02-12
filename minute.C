#include <stdio.h>

int main(void) {
int i,minutes,hour;
scanf("%d",&i);
minutes=i%60;
hour=i/60;
printf("%d %d",minutes,hour);
	return 0;
}
