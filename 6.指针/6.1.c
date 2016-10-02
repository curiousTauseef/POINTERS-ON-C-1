#include<stdio.h>
char *find_char(char const *source,char const *chars)
{
	char *temp;
	while(*source!='\0')
	{
		temp=chars;
		while(*temp!='\0')
		{
			if(*source==*temp) return temp;
			else temp++;
		}
		source++;
	}
	return NULL;
}
int main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	printf("%s\n",find_char(a,b));
	return 0;
}