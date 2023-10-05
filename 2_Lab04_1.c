#include<stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	if (B + C < 60)
		printf("%d %d", A, B + C);
	else {
		int hour = (B + C) / 60 + A;
		int min = (B + C) % 60;
		if (hour < 24)
			printf("%d %d", hour, min);
		else
			printf("%d %d", hour-24, min);
	}
}