#include<stdio.h>

int main() {
	int leapy;
	scanf("%d", &leapy);
	if ((leapy % 4 == 0 && leapy % 100 != 0) || leapy % 400 == 0)
		printf("1")
	else
		printf("0");

}