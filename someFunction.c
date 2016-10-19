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
int char_to_int(char temp)
{
	return temp-48;
}
char int_to_char(int temp)
{
	return temp+48;
}

template<typename T>
T lowbit(T k)
{
	return k&-k;
}

template<typename T>
ostream &operator<<(ostream &os, const vector <T> &it)
{
	for (int i = 0; i < it.size(); i++)
	{
		cout << it[i] << " ";
	}
	cout << endl;
}

ostream &operator<<(ostream &os, const vector<vector <int>> &it)
{
	for (int i = 0; i < it.size(); i++)
	{
		for (int j = 0; j < it[i].size(); j++)
		{
			os << it[i][j] << " ";
		}
		os << endl;
	}
	return os;
}