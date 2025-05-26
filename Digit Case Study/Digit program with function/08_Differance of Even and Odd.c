#include<stdio.h>
#include<conio.h>

int Calc(int num);

int main()
{
  int num,Count;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Calc(num);

  printf("\n Differance of (Even- Odd) = %d",Count);

  getch();
  return 0;
}
int Calc(int num)
{
    int rem = 0,Esum = 0,Osum = 0;

    while(num != 0)
    {
        rem = num % 10;

        if(rem %2 == 0)
         Esum += rem;
         else
           Osum += rem;
        num /= 10;
    }
    return Esum - Osum;
}
