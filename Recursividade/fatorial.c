#include <stdio.h>

double Fatorial (double n) {
  if (n == 1)
    return 1;
  return (n*Fatorial(n-1));
}


int main() {
  double n;
  
  printf("Digite um valor:\n");
  scanf("%lf", &n);
  
  printf("O valor é %0.0lf.\n", Fatorial(n));
}
