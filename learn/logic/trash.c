#include <stdio.h>

int main()
{
  int i, n, a=0, b=1, pt=0;
  printf("Informe um número, para ter sua sequência de Fibonacci\n");
  scanf("%i", &n);
  i=1;
  do{
    if(i==1){
    b=0;
    }
    if(i==2){
    a=0;
    b=1;
     }
    if(i==3){
     a=0;
     b=1;
    }
    pt=a+b;
    a=b;
    b=pt;
    i++;
    printf("%d\n", pt);
    }
  while(i<=n && pt<n);
  do{
    if(i==1){
    b=0;
    }
    if(i==2){
    a=0;
    b=1;
     }
    if(i==3){
     a=0;
     b=1;
    }
  if(n>=1 &&n<=6){
    pt=a+b;
    a=b;
    b=pt;
    i++;
    printf("%d\n", pt);

}}
  while(i>n && pt<n);

  return 0;
}