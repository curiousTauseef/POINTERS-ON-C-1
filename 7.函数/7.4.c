#include<stdlib.h>
#include<stdarg.h>
int max(int a, int b)
{
	return (a < b ? b : a);
}
int max_list(int temp, ...)
{
	va_list va_arg;
	va_start(va_arg, temp);
	int i = temp;
	int ans = 0;
	while (i >= 0)
	{
		i = va_arg(va_arg, int);
		ans = max(ans, i);
	}
	va_end(va_arg);
	return ans;
}
int main()
{
	printf("%d\n", max_list(2, 4, 2, 6, 10,-1));
	return 0;
}