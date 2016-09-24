#include<stdio.h>
#include<math.h>
/*
triangle
*/ 
int main()
{
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		printf("It is not a trangle\n");
	}
	else if(a==b&&b==c&&c==a)
	{
		printf("equilateral triangle\n");
	}
	else if(a==b||b==c||c==a)
	{
		printf("equicrural triangle\n");
	}
	else
	{
		printf("scalene triangle\n");
	}
	return 0;
}