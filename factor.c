#include<stdio.h>
#include<math.h>

void PFacTor(int Num);

void main (void)
{
    int InPut;
    printf("Enter Number For Prime Factors:");
    scanf("%i", &InPut);
    PFacTor(InPut);
    printf("\n");
}

void PFacTor(int Num)
{
    int Try = 2;
    if (Num % Try == 0)
    {
        printf("2 ");
        Num /= Try;
    }
    for (int i = 0; i < Num; i++)
    {
        if (Num % Try == 0)
        {
            printf("%i ", Try);
            Num /= Try;
        }
        if (Num % Try != 0)
        {
            Try++;
        }
    }
}
