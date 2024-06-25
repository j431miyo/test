#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( n & 1 ){　//正しくifが作用するように「==0」を消した
    printf("%d は奇数です\n", n);
  }else{
    printf("%d は偶数です\n", n);
  }
  return 0;
}
