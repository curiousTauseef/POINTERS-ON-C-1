void out_bin_32(int value)//输出一个32位整数的二进制
{
	int i=0;
	int arr[32];
	while(i<32)
	{
		arr[i]=(value&1);
		value>>=1;
		i++;
	}
	while(i>0)
	{
		printf("%d",arr[i-1]);
		i--;
	}
	printf("\n");
}

int char_to_int(char temp)
{
	return temp-48;
}
char int_to_char(int temp)
{
	return temp+48;
}