#include<stdio.h>
#include<conio.h>
#include<math.h>
main(void)
{
	float a=1.25,x;
	printf("nhap x\n");
	scanf("%d",&x);
	printf("gia tri cua y la %f",exp(a+sqrt(sin(x))-x));
	getch;
}