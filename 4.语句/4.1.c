#include<stdio.h>
#define precision 0.001
double abs(double a)
{
	if(a>0) return a;
	else return a*(-1);
}
double cal(double a,double n)
{
	return (a+n/a)/2;
}
double my_sqrt(double n)
{
	double a=1;
	while(abs(a-n)>precision)
	{
		a=cal(a,n);
	}
	return a;
}
int main()
{
	double n;
	scanf("%lf",&n);
	printf("%lf\n",sqrt(n));
	//printf("%g\n",1e-10);
	return 0;
}