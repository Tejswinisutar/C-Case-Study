#include<stdio.h>
#include<conio.h>

int Maxcnt(int num);

int main()
{
  int num = 0,Count = 0;

  printf("\n Enter A Number:");
  scanf("%d",&num);

  Count = Maxcnt(num);

  printf("\n Maximum of Digit Number = %d",Count);

  getch();
  return 0;
}
int Maxcnt(int num)
{
    int rem = 0,Max = 0;

    while(num != 0)
    {
        rem = num % 10;
        if(rem > Max)
            {
              Max = rem;
            }
        num /= 10;
    }
    return Max;
}
