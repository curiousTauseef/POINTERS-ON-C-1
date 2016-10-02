/*
there are string str and substr,
thie program will delete the first substr in the str.
*/
#include<stdio.h>
int equal(char const*str,char const *substr)//if they are equal,return the pointer of the last same char
{
	while(*str++==*substr++)
	{
		if (*substr=='\0') return 1;
	}
	return 0;
}
void strcopy(char *str,const char *source)
{
	while(*source!='\0')
	{
		*str=*source;
		str++;
		source++;
	}
	*str='\0';
}
int strlength(char const *str)
{
	int length=0;
	while(*str!='\0')
	{
		length++;
		str++;
	}
	return length;
}
int del_substr(char *str,char const *substr)
{
	while(*str!='\0')
	{
		if(equal(str,substr)) break;
		else str++;
	}
	if(*str=='\0') return 0;
	else 
	{
		int substr_length=strlength(substr);
		char *end=str+substr_length;
		strcopy(str,end);
		return 0;
	}
}
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	del_substr(a,b);
	printf("%s\n",a);
	return 0;
}