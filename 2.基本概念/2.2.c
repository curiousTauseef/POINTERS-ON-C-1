#include<stdio.h>
int main()
{
	int num = 0;//num表示{的数量
	int valid = 1;
	char temp;
	while (scanf("%c", &temp) != EOF)
	{
		if (temp == '{') num++;
		else if (temp == '}')
		{
			if (num > 0) num--;
			else 
			{
				valid = 0;
				break;
			}
		}
	}
	if (valid) printf("The code is valid.\n");
	else printf("The code is invalid!\n");
	return 0;
}
