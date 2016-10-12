#include<stdlib.h>
int ascii_to_integer(char *string)
{
	int i=0;
	int ans=0;
	while(string[i]!='\0')
	{
		if(string[i]<'0'||'9'<string[i]) return 0;
		else ans=ans*10+(string[i]-48);
		
		i++;
	}
	return ans;
}
int main()
{
	char a[10];
	scanf("%s",a);
	printf("%d\n",ascii_to_integer(a));
	return 0;
} 