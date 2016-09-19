#include <stdio.h>
#include <string.h>
int getline(char *str)
{
	int num=0;
	char temp;
	while((scanf("%c",&temp))!=EOF)
	{
		if(temp=='\n')
		{
			str[num++]='\0';
			return 1;
		}
		else
		{
			str[num++]=temp;
		}
	}
	str[num++]='\0';
	return 0;
}
int main(int argc, char *argv[])
{
	char save[10000];
	char temp[10000];
	while(getline(temp))
	{
		if(strlen(save)<strlen(temp)) strcpy(save,temp);
	}
	printf("%s\n",save);
	return 0;
}
