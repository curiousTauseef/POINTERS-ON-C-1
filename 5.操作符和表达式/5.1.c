#include<stdio.h>
#include<math.h>
char low(char temp)
{
	if('A'<=temp&&temp<='Z') return temp+32;
	else return temp;
}
int main()
{
	char temp;
	while(scanf("%c",&temp)!=EOF)
	{
		printf("%c",low(temp));
	}
	return 0;
}