#include <stdio.h>
int main()
{
	int n, total = 0;
	scanf("%d", &n);
	char arr[1000];
	scanf("%s", arr);

	for (int i = 0; i < n; i++)
	{
		total += arr[i] - '0';
	}

	printf("%d", total);
}