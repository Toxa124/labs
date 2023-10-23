#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{

    char scale;
    scale= *argv[ 1];
    float temp;
    temp= atof(argv[2]);
    switch(scale)
    {
    case 'C':

            if (temp>=-273.15)
            {
            printf("K=%.2f\n",temp+273.15);
            printf("F=%.2f\n",temp*1.8+32);
            }
            else
            {
                printf("Does not correspond to the laws of physics");
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
                printf("Does not correspond to the laws of physics");

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
                printf("Does not correspond to the laws of physics");
            }
        break;

        default:
        {
            printf("If entered C,then:\n");
            printf("C=%.2f\n",temp);
            printf("K=%.2f\n",temp+273.15);
            printf("F=%.2f\n\n\n\n",temp*1.8+32);

            printf("If entered K, then:\n");
            printf("K=%.2f\n",temp);
            printf("C=%.2f\n",temp-273.15);
            printf("F=%.2f\n\n\n\n",(temp-273.15)*1.8+32);

            printf("If entered F, then:\n");
            printf("F=%.2f\n",temp);
            printf("C=%.2f\n",(temp-32)/1.8);
            printf("K=%.2f\n",(temp-32)/1.8+273.15);

        }

    }
    return 0;
}

