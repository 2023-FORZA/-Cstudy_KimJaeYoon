#include <stdio.h>

int main()
{
	int i, count, N, cur = 0;
	int balloon[1000];
	int sign, number = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &balloon[i]);
	for (count = N; count; count--) {
		sign = number >= 0 ? 1 : -1;
		number = number >= 0 ? number : (-1) * number;
		while (number) {
			cur = sign > 0 ? (cur + 1) % N : (cur - 1 + N) % N;
			if (balloon[cur])
				number = (number - 1) % count;
		}
		printf("%d ", cur + 1);
		number = balloon[cur];
		balloon[cur] = 0;
	}
	return 0;
}