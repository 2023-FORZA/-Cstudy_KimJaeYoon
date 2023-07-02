#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char name[11];
	int kor;
	int eng;
	int math;
}str;

str arr[100000];

int cmp(const void* a, const void* b)
{
	str A = *(str*)a;
	str B = *(str*)b;

	if (A.kor == B.kor) {
		if (A.eng == B.eng)
		{
			if (A.math == B.math)
			{
				return strcmp(A.name, B.name);
			}
			else
				return A.math < B.math;
		}
		else
			return A.eng > B.eng;
	}
	else
		return A.kor < B.kor;
}

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", &arr[i].name, &arr[i].kor, &arr[i].eng, &arr[i].math);
	}
	qsort(arr, n, sizeof(str), cmp);
	for (i = 0; i < n; i++)
		printf("%s\n", arr[i].name);
	return 0;
}