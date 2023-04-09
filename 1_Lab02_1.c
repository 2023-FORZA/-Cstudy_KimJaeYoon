#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	long long a, b, c;
	scanf_s("%lld %lld %lld", &a, &b, &c);
	printf("%lld", a + b + c);
	return 0;
}