#include<stdio.h>
#include<math.h>
int is_prime(int x)
{
	int it=(int)sqrt(x);
	int i=2;
	for(;i<=it;i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int main()
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(is_prime(i)) printf("%d\n",i);
	}
	return 0;
}