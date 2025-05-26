#include<stdio.h>
#include<conio.h>

int  Num[5] = {};

void  Accept_Element(int);
void  Display_Element(int);

int main()
{
            Accept_Element(0);
            Accept_Element(1);
            Accept_Element(2);
            Accept_Element(3);
            Accept_Element(4);

            printf("\n\n==================================\n");

            Display_Element(0);
            Display_Element(1);
            Display_Element(2);
            Display_Element(3);
            Display_Element(4);

            getch();
            return 0;
}


void  Accept_Element(int Element_Num)
{
            printf("\n Enter Value for Array Element Number %d = ", Element_Num);
            scanf("%d", &Num[Element_Num]);

            return;
}

void  Display_Element(int  Element_Num)
{
            printf("\n Value of Element %d = %d .",Element_Num+1,Num[Element_Num]);

            return;
}
