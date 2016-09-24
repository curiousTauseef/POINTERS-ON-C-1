#include<stdio.h>
#include<math.h>
int length(char a[])
{
	int i=0;
	while(a[i]!='\0') i++;
	return i;
}
int getline(char a[])//if check EOF.return EOF
{
	char temp;
	int i=0;
	while(scanf("%c",&temp)!=EOF)
	{
		if(temp=='\n'){
			a[i]='\0';
			return 1;
		}
		else{
			a[i]=temp;
			i++;
		}
	}
	a[i]='\0';
	return EOF;
}
/*
the deblank function
*/
void deblank(char string[])
{
	int i_origin=0;
	int i_new=0;
	while(string[i_origin]!='\0')
	{
		string[i_new]=string[i_origin];
		i_new++;
		if(string[i_origin]!=' ') i_origin++;
		else while(string[i_origin]==' ') i_origin++;
	}
	string[i_new]='\0';
	printf("%s\n",string);
}
int main()
{
	char dst[1000];
	a:
	getline(dst);
	deblank(dst);
//	printf("%s\n",dst);
	goto a;
	return 0;
}