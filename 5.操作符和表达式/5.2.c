#include<stdio.h>
#include<math.h>
char change(char temp)
{
	return (char)(temp+13);
}
int main()
{
	char temp;
	while(scanf("%c",&temp)!=EOF)
	{
		printf("%c",change(temp));
	}
	return 0;
}