#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
float mass [100];
int a=argc;
int i=1;
int m=0;
while ( i < a )
{
  if (atof(argv[i]))
  {
  mass[m]=((atof(argv[i])));
  i++;
  m++;
  }
  else
  {
  char z=(*argv[i]);
  switch (z)
  {
  case '+':
  mass[m-2]=mass[m-2]+mass[m-1];
  m=m-1;
  i=i+1;
  break;

  case '-':
    mass[m-2]=mass[m-2]-mass[m-1];
    m=m-1;
    i=i+1;
    break;
  case '/':
    mass[m-2]=mass[m-2]/mass[m-1];
    m=m-1;
    i=i+1;
    break;
  case '*':
    mass[m-2]=mass[m-2]*mass[m-1];
    m=m-1;
    i=i+1;
    break;
    default:
    printf("Error");
    break;

  }
}
}
printf("%f",mass[0]);
return 0;
}
