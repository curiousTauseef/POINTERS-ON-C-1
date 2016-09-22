#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
char *toCharArray(const string &it)
{
	int length = it.length();
	char *ans = new char[length + 1];
	ans[length] = '\0';
	for (int i = 0; i < length; i++)
		ans[i] = it[i];
	return ans;
}
string numToString(int it)
{
	string ans = "";
	while (it > 0)
	{
		int temp = it % 10;
		ans += (char)(temp + 48);
		it /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
int main()
{
	int chapter, numOfPractice;
	cout << "Input your chapter:";
	cin >> chapter;
	cout << "Input how many exercises you need to write:";
	cin >> numOfPractice;
	string prefix = "copy nul " + numToString(chapter) + ".";
	string note = prefix + "note.txt";
	system(toCharArray(note));
	for (int i = 1; i <= numOfPractice; i++)
	{
		string practice = numToString(i) + ".c";
		system(toCharArray(prefix + practice));
	}
	//string a = "pause";
	//system(toCharArray(a));
	return 0;
}
