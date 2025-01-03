#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("AVAILABLE memory: %d\n", kmemfree());
  exit(0);
}
