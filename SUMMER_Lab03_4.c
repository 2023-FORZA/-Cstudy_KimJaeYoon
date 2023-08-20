#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int box;
        scanf("%d", &box);
        for (int i = 0; i < box; i++)
        {
            for (int j = 0; j < box; j++)
            {
                if (i != 0 && i != box - 1 && j != 0 && j != box - 1)
                    printf("J");
                else
                    printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}
