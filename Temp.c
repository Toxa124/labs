#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

    char shkala;
    shkala= *argv[ 1];
    float temp;
    temp= atof(argv[2]);
    switch(shkala)
    {
    case 'C':

            if (temp>=-273.15)
            {
            printf("K=%.2f\n",temp+273.15);
            printf("F=%.2f\n",temp*1.8+32);
            }
            else
            {
                printf("Ne sootvetstvyet zakonam fiziki");
            }
            break;

    case 'K':

            if (temp>=0)
            {
                printf("C=%.2f\n",temp-273.15);
                printf("F=%.2f\n",(temp-273.15)*1.8+32);
            }
            else
            {
                printf("Ne sootvetstvyet zakonam fiziki");

            }
            break;

    case 'F':

            if (((temp-32)/1.8+273.15)>=0)
            {
                printf("C=%.2f\n",(temp-32)/1.8);
                printf("K=%.2f\n",(temp-32)/1.8+273.15);
            }
            else
            {
                printf("Ne sootvetstvyet zakonam fiziki");
            }
        break;

        default:
        {
            printf("Esli vveden C,to:\n");
            printf("С=%.2f\n",temp);
            printf("K=%.2f\n",temp+273.15);
            printf("F=%.2f\n\n\n\n",temp*1.8+32);

            printf("Esli vveden K, то:\n");
            printf("K=%.2f\n",temp);
            printf("C=%.2f\n",temp-273.15);
            printf("F=%.2f\n\n\n\n",(temp-273.15)*1.8+32);

            printf("Esli vveden F, то:\n");
            printf("F=%.2f\n",temp);
            printf("C=%.2f\n",(temp-32)/1.8);
            printf("K=%.2f\n",(temp-32)/1.8+273.15);

        }

    }
    return 0;
}

