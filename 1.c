#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( n & 1 ){
    printf("%d は奇数です\n", n);
  }else{
    printf("%d は偶数です\n", n);
  }
  return 0;
}
