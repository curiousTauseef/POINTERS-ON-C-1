/*
use bit_array to find the prime number to n.
you can use the virtual_index like normal index of array, 
to check its value(you will get 1 or 0),
and you can change it(only to 1 or 0).
*/
#include<stdio.h>
#define N 10001
int power(int exponent)//return 2^exponent
{
	int ans = 1;
	while (exponent-->0) ans <<= 1;
	return ans;
}
int get_bit_int_one_number(int original_value,unsigned bit_index)
{
	int temp=power(bit_index);
	if(temp==(temp&original_value)) return 1;
	else return 0;
}
int get_bit(int *array_begin,int bit,int virtual_index)
{
	int array_index=(int) (virtual_index/bit);
	int bit_index=virtual_index%bit;
	return get_bit_int_one_number(array_begin[array_index],bit_index);
}
int change_bit_in_one_number(int original_value,unsigned bit_index,unsigned bit_to_change)
{
	if(bit_to_change>0) return original_value|=power(bit_index);
	else return original_value&=~power(bit_index);
}
void change_bit(int *array_begin,unsigned bit,unsigned int virtual_index,unsigned int bit_to_change)
{
	int array_index=(int) (virtual_index/bit);
	int bit_index=virtual_index%bit;
	array_begin[array_index]=change_bit_in_one_number(array_begin[array_index],bit_index,bit_to_change);
}
void delete_not_prime(int *begin,int *end,int time)//end is the pointer after final element 
{
	int virtual_index=time*2;
	while(virtual_index<(end-begin)*32)
	{
		change_bit(begin,32,virtual_index,0);
		virtual_index+=time;
	}
}
void find_prime(int *begin,int *end)
{
	int virtual_index=2;
	while(virtual_index<(end-begin)*32)
	{
		if(get_bit(begin,32,virtual_index)==1) delete_not_prime(begin,end,virtual_index);
		virtual_index++;
	}
}
void out_prime(int *begin,int *end)
{
	int virtual_index=2;
	int right_range=1000;
	int number_in_range=0;
	while(virtual_index<(end-begin)*32)
	{
		if(get_bit(begin,32,virtual_index)==1) number_in_range+=1;
		virtual_index++;
		if(right_range<virtual_index) 
		{
			printf("%d~%d:\t%d\n",(right_range-1000),right_range,number_in_range);
			number_in_range=0;
			right_range+=1000;
		}
	}
}
int main()
{
	int list[N];
	int *temp=list;
	while(temp<&list[N]) *temp++=~0;//set all value to 0
	find_prime(list,&list[N]);
	out_prime(list,&list[N]);
	return 0;
}