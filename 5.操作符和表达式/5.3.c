#include<stdio.h>
#include<math.h>
/*
there are some problem
*/
void out_bin_32(int value)
{
	int i=0;
	int arr[32];
	while(i<32)
	{
		arr[i]=(value&1);
		value>>=1;
		i++;
	}
	while(i>0)
	{
		printf("%d",arr[i-1]);
		i--;
	}
	printf("\n");
}
unsigned int reverse_bits(unsigned int value)
{
	unsigned int i=0,ans=0;
	do
	{
		printf("value:\t%d\t",value);
		out_bin_32(value);
		printf("ans:\t%d\t",ans);
		out_bin_32(ans);
		ans|=(value&1);
		value>>=1;
		ans<<=1;
		printf("\n");
		i++;
	} while(i<32);
	printf("%d\n",(unsigned)ans);
	return ans;
}
int main()
{
	unsigned int a;
	while(scanf("%d",&a)!=EOF)
	{
		printf("%d\n",reverse_bits(a));
		//reverse_bits(a);
//		out_bin_32(a);
	}
	return 0;
}