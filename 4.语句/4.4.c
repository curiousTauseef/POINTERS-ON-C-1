#include<stdio.h>
#include<math.h>
/*
still pause
*/
void copy_n(char dst[],char src[],int n) 
{
	int i=0;
	while(src[i]!='\0'&&i<n)
	{
		dst[i]=src[i];
		i++;
	}
	for(;i<n;i++)
	{
		dst[i]='\0';
	}
}
void out(char arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t%c\n",i,arr[i]);
	}
}
int main()
{
	char in1[10],in2[5];
	//scanf("%s",in2);
	//copy_n(in1,in2,10);
	out(in1,123);
	return 0;
}