/*
find the prime number to n (not use the way to reduce memory)
lesson:avoid dereference after pointer add.
*/
#include<stdio.h>
#define N 10001
void delete_not_prime(int *begin,int *end,int time)//end is the pointer after final element 
{
	for(begin+=time;begin<end;begin+=time)
		*begin=0;
}
void find_prime(int *begin,int *end)
{
	int i=2;//set the begin value to 2
	while(begin<end)
	{
		if(*begin) delete_not_prime(begin,end,i);
		begin++;
		i++;
	}
}
void out_prime(int *begin,int *end)
{
	int i=2;
	while(begin<end)
	{
		if(*begin) printf("%d\n",i);
		*begin++;
		i++;
	}
}
int main()
{
	int list[N];
	int *temp=list;
	while(temp<&list[N]) *temp++=1;//set all value to 0
	find_prime(list,&list[N]);
	out_prime(list,&list[N]);
	//int i=0;
	//for(;i<N;i++) 
	//printf("%d",list[i]);
	return 0;
}