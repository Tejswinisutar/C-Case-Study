#include<stdio.h>
#include<conio.h>

int Zcnt(int num);

int main()
{
  int num,Count;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Zcnt(num);

  printf("\n Count of Odd Number = %d",Count);

  getch();
  return 0;
}
int Zcnt(int num)
{
    int Count = 0,rem = 0;

    while(num != 0)
    {
        rem = num % 10;
        if(rem == 0)
        Count++;
        num /= 10;
    }
    return Count;
}
