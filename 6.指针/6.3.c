/*
reverse string
*/
#include<stdio.h>
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void reverse_string(char *string)
{
	char *end=string;
	while(*end!='\0') end++;
	end--;
	while(string<end) swap(string++,end--);
}
int main()
{
	char a[100],b[100];
	scanf("%s",&a);
	reverse_string(a);
	printf("%s\n",a);
	return 0;
}