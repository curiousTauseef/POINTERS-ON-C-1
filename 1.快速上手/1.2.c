#include <stdio.h>
char in[50010];
int row=1;
void in_out()
{
	int row_num=0;
	char temp;
	scanf("%c",&temp);
	while(temp!='\n')
	{
		in[row_num++]=temp;
		scanf("%c",&temp);
	}
	in[row_num]='\0';
	if(row_num>0) {
	printf("row %d:\t%s\n",row,&in);
	row++;
	}
}
int main(int argc, char *argv[])
{
	while(1)
	{
		in_out();
	}
	return 0;
}
