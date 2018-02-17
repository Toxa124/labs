
#include <stdlib.h>
#include <stdio.h>
int stack[1000];
int teknomer= 0;
int a;
int razmer=1000;
void do1()
{
    printf("Vvedite jelaemoe znachenie\n");
    int z;
    scanf("%d",&z);
stack[teknomer]=z;
teknomer++;
}
void do2()
{
if (teknomer == 0)
{
printf("stack pyst");
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
     printf("stack pyst");
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
        printf(" \n1)Polojit element B stack\n 2)ybrat element iz stack\n 3)Pokazat verxnii element\n 4)Pokazat stack\n 5)Zakonchit raboty\n");
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
                printf("oshibka pri vibore");
               }
    }


return(0);
    }
