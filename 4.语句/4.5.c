/*
fuck EOF...
I wanna kill myself
*/
#include<stdio.h>
#include<math.h>
int equal(char a[],char b[])
{
	int i;
	for(i=0;(a[i]!='\0'||b[i]!='\0')&&i<128;i++)
	{
		if(a[i]!=b[i]) return 0;
	}
	return 1;
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
void strcpy(char accept[],char from[])
{
	int i=0;
	while(from[i]!='\0')
	{
		accept[i]=from[i];
		i++;
	}
	accept[i]='\0';
}
int main()
{
	char in1[128],in2[128],in3[128];
	in1[127]=in2[127]=in3[127]='\0';
	if(getline(in1)!=EOF){
		if(getline(in2)!=EOF){
			while(getline(in3)!=EOF){
				if(equal(in1,in2)&&(!equal(in2,in3))){
					printf("%s\n",in1);
				}
				strcpy(in1,in2);
				strcpy(in2,in3);
			}
		}
		else{
			if(equal(in1,in2)) printf("%s\n",in1);
			else printf("just two row\n");
		}
	}
	else{
		printf("just one row\n");
	}
	return 0;
}