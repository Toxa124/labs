#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
        printf("Takogo month ne bivaet");
        exit(0);
        }
}

int god(int a)
{
    int first,last,vek;

    first=a/100;
    last=a%100;
    vek=6-(first%4)*2;
    return ((vek+last+last/4)%7);
}




int main()
{
    int g,d,a;
    setlocale(LC_ALL, "RUS");
    printf("vvedite god\n");
    scanf("%d",&g);
    printf("vvedite nomer month\n");
    scanf("%d",&a);
    printf("vvedite day\n");
    scanf("%d",&d);
    int otvet;
    otvet=((d+month(a)+god(g))%7);
    switch (otvet)
    {
  case 0:
    printf("Subbota");
    break;
  case 1:
    printf("Voskresenie");
    break;
  case 2:
    printf("Ponedelnik");
    break;
  case 3:
    printf("Vtornik");
    break;
  case 4:
    printf("Sreda");
    break;
  case 5:
    printf("Chetverg");
    break;
    case 6:
        printf("Pyatnitsa");
        break;
    default:
        printf("bagulia");
        break;
}
return 0;

}

