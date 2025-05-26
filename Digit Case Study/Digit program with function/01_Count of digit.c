#include<stdio.h>
#include<conio.h>

int Dcnt(int num);

int main()
{
  int num,Count;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Dcnt(num);

  printf("\n Count of Digit Number = %d",Count);

  getch();
  return 0;
}
int Dcnt(int num)
{
    int Count = 0;

    while(num != 0)
    {
        Count++;
        num /= 10;
    }
    return Count;
}
