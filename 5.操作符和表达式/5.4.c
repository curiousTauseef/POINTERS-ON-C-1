/*
I can't test this program.
*/
#include<stdio.h>
#include<math.h>
int char_to_int(char temp)
{
	return temp-48;
}
char int_to_char(int temp)
{
	return temp+48;
}
void set_bit(char bit_array[],unsigned bit_number)
{
	bit_array[bit_number]=int_to_char(1);
}
void clear_bit(char bit_array[],unsigned bit_number)
{
	bit_array[bit_number]=int_to_char(0);
}
void assign_bit(char bit_array[],unsigned bit_number,int value)
{
	bit_array[bit_number]=int_to_char(value==0?0:1);
}
int test_bit(char bit_array[],unsigned bit_number)
{
	return char_to_int(bit_array[bit_number]);
}
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		printf("%d\n",(a&1));
	}
	return 0;
}