#include<stdlib.h>
int gcd(int m,int n)
{
	if(m<=0 || n<=0) return 0;
	if(m%n==0) return n;
	else return gcd(n,m%n);
}
int main()
{
	printf("%d\n",gcd(34,48));
	return 0;
} 
