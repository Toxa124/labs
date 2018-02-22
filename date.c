#include <stdio.h>
#include <stdlib.h>
int month(int a)
{

    switch (a)
        {
        case 1:
        return 1;
        break;
        case 2:
        case 3:
        return 4;
        break;
        case 4:
        return 0;
        break;
        case 5:
        return 2;
        break;
        case 6:
        return 5;
        break;
        case 7:
        return 0;
        break;
        case 8:
        return 3;
        break;
        case 9:
        return 6;
        break;
        case 10:
        return 1;
        break;
        case 11:
        return 4;
        break;
        case 12:
        return 6;
        break;
        default:
        printf("This month does not exist");
        exit(0);
        }
}

int year(int a)
{
    int first,last,сentury;

    first=a/100;
    last=a%100;
    сentury=6-(first%4)*2;
    return ((сentury+last+last/4)%7);
}




int main()
{
    int g,d,a;
    printf("enter the year\n");
    scanf("%d",&g);
    printf("enter the month\n");
    scanf("%d",&a);
    printf("enter the day\n");
    scanf("%d",&d);
    int answer;
    answer=((d+month(a)+year(g))%7);
    switch (answer)
    {
  case 0:
    printf("Saturday");
    break;
  case 1:
    printf("Sunday");
    break;
  case 2:
    printf("Monday");
    break;
  case 3:
    printf("Tuesday");
    break;
  case 4:
    printf("Wednesday");
    break;
  case 5:
    printf("Thursday");
    break;
    case 6:
        printf("Friday");
        break;
    default:
        printf("bug");
        break;
}
return 0;

}

