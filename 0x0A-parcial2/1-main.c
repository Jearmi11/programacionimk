#include <stdio.h>

int main()
{
    int rows = 0;
    int j;
    

    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    for(int i = 1; i <= rows; i++)
	{
		for(int j = 1; j <= rows - i; j++)
		{
			printf(" ");
		}
        for(int j = 1; j <= rows ; j++)
        {
            printf("*");
        }
		printf("\n");
    }
}