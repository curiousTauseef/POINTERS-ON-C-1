#include<stdio.h>
#include<math.h>
int length(char a[])
{
	int i=0;
	while(a[i]!='\0') i++;
	return i;
}

int substr(char dst[],char src[],int start,int len)
{
	int src_len=length(src);
	if(src_len<=start||start<0||len<0){
		dst[0]='\0';
		return 0;
	}
	int i=start;
	while((i<src_len&&(i-start)<len))
	{
		dst[i-start]=src[i];
		i++;
	}
	dst[i-start]='\0';
}
int main()
{
	char dst[1000],src[1000];
	int start,len;
	scanf("%s%d%d",src,&start,&len);
	substr(dst,src,start,len);
	printf("%s\n",dst);
	return 0;
}