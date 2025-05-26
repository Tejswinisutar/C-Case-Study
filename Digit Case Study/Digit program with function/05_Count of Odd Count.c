#include<stdio.h>
#include<conio.h>

int Ocnt(int num);

int main()
{
  int num,Count;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Ocnt(num);

  printf("\n Count of Odd Number = %d",Count);

  getch();
  return 0;
}
int Ocnt(int num)
{
    int Count = 0,rem = 0;

    while(num != 0)
    {
        rem = num % 10;
        if(rem %2 == 1)
        Count++;
        num /= 10;
    }
    return Count;
}
