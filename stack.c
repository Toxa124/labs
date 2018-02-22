
#include <stdlib.h>
#include <stdio.h>
int stack[1000];
int teknomer= 0;
int a;
int razmer=1000;
void do1()
{
    printf("Enter the desired value\n");
    int z;
    scanf("%d",&z);
stack[teknomer]=z;
teknomer++;
}
void do2()
{
if (teknomer == 0)
{
printf("stack empty");
}
else
{
    stack[teknomer - 1] = 0;
	teknomer--;
}
}
void do3()
{
 if (teknomer==0)
 {
     printf("stack empty");
 }
 else
 {
     printf("%d",stack[teknomer-1]);
 }
}
void do4()
{
int p=0;
while (p<teknomer)
{printf("%d ",stack[p]);
p++;}
}

int main()
{

    a=200;

    while (a!=5)
    {
        printf(" \n1)put the item on the stack\n 2)remove an item from the stack\n 3)show top item\n 4)show stack\n 5)finish the job\n");
    scanf("%d",&a);


        switch(a)
               {
             case 1:
                do1();
                break;
             case 2:
                do2();
                break;
             case 3:
                do3();
                break;
             case 4:
                do4();
                break;
             case 5:
                exit(0);
                break;

             default:
                printf("error in selection");
               }
    }


return(0);
    }
