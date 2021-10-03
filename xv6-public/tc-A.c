#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void) {
  printf(1, "Start: virtual pages: %d, physical pages: %d\n", numvp(), numpp());

  int N = 100000;

  int *z = malloc((sizeof(int)) * N);

  printf(1, "After malloc: virtual pages: %d, physical pages: %d\n", numvp(),
         numpp());

  free(z);
  printf(1, "After free:  virtual pages: %d, physical pages: %d\n", numvp(),
         numpp());

  exit();
}
