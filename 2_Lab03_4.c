#include <stdio.h>

int main() {
	int i, nOne, nZero;
	char arr[1000001];

	i = 0;
	nOne = 0; nZero = 0;

	while (1) {
		scanf("%c", &arr[i]);

		if (arr[i++] == '\n')
			break;
	}

	i = 0;

	while (1) {
		if (arr[i] == '0') {
			while (arr[i + 1] == '0')
				i++;
			nZero += 1;
			i++;
		}
		else {
			while (arr[i + 1] == '1')
				i++;
			nOne += 1;
			i++;
		}

		if (arr[i] == '\n')
			break;
	}

	if (nZero < nOne)
		printf("%d\n", nZero);
	else
		printf("%d\n", nOne);

	return 0;
}