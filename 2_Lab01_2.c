#include<stdio.h>

int main() {

	int N, max, min;
	scanf("%d", &N);
	int arr[N];

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	max = min = arr[0];
	for (int j = 0; j < N; j++) {
		if (arr[j] > max)
			max = arr[j];
		if (arr[j] < min)
			min = arr[j];
	}
	
	printf("%d %d", min, max);

}