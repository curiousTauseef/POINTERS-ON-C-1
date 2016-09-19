#include <stdio.h>
int main(int argc, char *argv[])
{
	signed char checksum=-1;
	char save[200];
	int num=0;
	char temp;
	scanf("%c",&temp);
	while(temp!='\n')
	{
		checksum+=temp;
		save[num++]=temp;
		scanf("%c",&temp);
	}
	save[num++]='\0';
	printf("%s\n%d\n",save,checksum);
	return 0;
}