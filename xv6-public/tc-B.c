#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void) {
  uint ret;
  printf(1, "VP=%d, PP=%d (Start)\n", numvp(), numpp());

  ret = mmap(8192);

  if (ret == 0)
    printf(1, "mmap failed\n");
  else {
    printf(1, "VP=%d, PP=%d (After mmap two pages)\n", numvp(), numpp());

    char *addr = (char *)ret;

    addr[8000] = 'a';

    printf(1, "VP=%d, PP=%d (After accessing second page)\n", numvp(), numpp());

    addr[0] = 'a';

    printf(1, "VP=%d, PP=%d (After accessing first page)\n", numvp(), numpp());

    addr[8000] = 'b';

    printf(1, "VP=%d, PP=%d (After accessing second page)\n", numvp(), numpp());

    addr[8192] = 'a';

    printf(1, "VP=%d, PP=%d (After accessing third page)\n", numvp(), numpp());
  }

  exit();
}
