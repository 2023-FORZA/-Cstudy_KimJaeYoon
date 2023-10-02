#include <stdio.h>

int main()
{
	int T, a, b;
	int res = 1;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);

		for (int j = 0; j < b; j++)
		{
			res *= a;
			res %= 10;
		}
		if (res == 0)
		{
			res = 10;
		}
		printf("%d\n", res);
		res = 1;
	}
	return 0;
}