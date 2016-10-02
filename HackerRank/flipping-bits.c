#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main() {
  uint32_t allones = 0;

  allones -= 1;

  int T; 
  scanf("%d", &T);

  uint32_t j;

  for(int i = T; i > 0; i++) {
    scanf("%u",&j);
    printf("%u\n", j ^ allones);
  }

  return 0;
}
