#include<stdio.h>
#include<conio.h>

int Mincnt(int num);

int main()
{
  int num = 0,Count = 0;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Mincnt(num);

  printf("\n minimum of Digit Number = %d",Count);

  getch();
  return 0;
}
int Mincnt(int num)
{
    int rem = 0,Min = 9;

    while(num != 0)
    {
        rem = num % 10;
        if(rem < Min)
            {
              Min = rem;
            }
        num /= 10;
    }
    return Min;
}
