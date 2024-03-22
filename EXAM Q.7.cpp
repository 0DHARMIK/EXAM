#include <stdio.h>

int main() 
{
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            if (i % 2 != 0) 
			{
                printf("%d", i * i);
            } else {
                printf("%d", i);
            }

            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}