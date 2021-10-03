#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(void) {
  // uint ret;
  printf(1, "Start: virtual pages: %d, physical pages %d\n", numvp(), numpp());

  // ret = mmap(-1234);
  // if (ret == 0)
  //   printf(1, "mmap failed for wrong inputs\n");
  // else
  //   exit();

  // ret = mmap(1234);
  // if (ret == 0)
  //   printf(1, "mmap failed for wrong inputs\n");
  // else
  //   exit();

  // ret = mmap(4096);

  // if (ret == 0)
  //   printf(1, "mmap failed\n");
  // else {
  //   printf(1, "After mmap one page: virtual pages: %d, physical pages %d\n",
  //          numvp(), numpp());

  //   char *addr = (char *)ret;

  //   addr[0] = 'a';

  //   printf(1,
  //          "After access of one page: virtual pages: %d, physical pages %d\n",
  //          numvp(), numpp());
  // }

  // ret = mmap(8192);

  // if (ret == 0)
  //   printf(1, "mmap failed\n");
  // else {
  //   printf(1, "After mmap two pages: virtual pages: %d, physical pages %d\n",
  //          numvp(), numpp());

  //   char *addr = (char *)ret;

  //   addr[0] = 'a';

  //   printf(1,
  //          "After access of first page: virtual pages: %d, physical pages %d\n",
  //          numvp(), numpp());
  //   addr[8000] = 'a';

  //   printf(
  //       1,
  //       "After access of second page: virtual pages: %d, physical pages %d\n",
  //       numvp(), numpp());
  // }

  exit();
}
