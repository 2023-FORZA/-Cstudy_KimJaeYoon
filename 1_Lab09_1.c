#include <stdio.h>
#include <stdlib.h>


int main()
{
    int Test = 0, i, j;

    scanf("%d", &Test);

    int score = 0, sum = 0;
    int* SumArray = (int*)malloc(sizeof(int) * Test);

    for (i = 0; i < Test; i++)
    {
        char c[80];
        scanf("%s", c);

        for (j = 0; j < 80; j++)
        {
            if (c[j] == '\0' || c[j] == '\n')
                break;

            if (c[j] == 'O')
            {
                score++;
                sum = sum + score;
            }

            else if (c[j] == 'X')
            {
                score = 0;
            }
        }
        SumArray[i] = sum;
        score = 0;
        sum = 0;
    }
    for (i = 0; i < Test; i++)
    {
        printf("%d\n", SumArray[i]);
    }
    free(SumArray);
    return 0;
}
