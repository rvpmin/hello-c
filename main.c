#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
  int *n;
  int *m;

  m = malloc(9);
  *m = 2;
  

  n = malloc(9);//cuánta memoria (8 bytes)

  *n = 3;
  printf("%i\n", *n + *m);
  printf("%u\n", n[6]);

  printf("%i\n",*n);

  
  /*
  int n; //Max number of iterations
  int i;
  unsigned long  int r;
  unsigned int r2;

  n = 10000000;
  r = 0;
  for(i=1; i<=n; i++){
    r = r + i;
  }

  printf("Max value =%lu\n", ULONG_MAX);
  printf("r=%lu\n",r);

  printf("r=%lx\n", r);
  printf("r=%f\n", r2);
  printf("size r=%zu bits \n",sizeof(r)*8);
  printf("size r=%zu bits \n",sizeof(r2)*8);
  */
  
  return 0;
}
