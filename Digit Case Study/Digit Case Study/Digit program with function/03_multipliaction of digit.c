#include<stdio.h>
#include<conio.h>

int Mcnt(int num);

int main()
{
  int num,Mult;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Mult = Mcnt(num);

  printf("\n Multiplication of Digit Number = %d",Mult);

  getch();
  return 0;
}
int Mcnt(int num)
{
    int Mult = 1, rem;

    while(num != 0)
    {
        rem = num%10;
        num /= 10;
        Mult *= rem;
    }
    return Mult;
}

