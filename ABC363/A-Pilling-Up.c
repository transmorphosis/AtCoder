#include <stdio.h>

int main(void)
{
  int r;
  
  scanf("%d", &r);
  if(1 <= r && r <= 99)
    printf("%d", 100 - r);
  else if(100 <= r && r <= 199)
    printf("%d", 200 - r);
  else
    printf("%d", 300 - r);
  return (0);
}
