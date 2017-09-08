#include <stdio.h>

int mult (int n, int m) {
  if (m == 1)
    return n;
    
  if (m == 0 || n == 0)
    return 0;
  
  return (n + mult(n, --m));
}

int main() {
  int n, m;
  scanf("%d x %d", &n, &m);
  
  printf("\n%d\n", mult(n, m));
}
