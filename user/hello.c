#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  fprintf(1, "Calling our system call\n");
  hello();
  exit(0);
}
