#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
  int id, ret;
  ret = fork();
  id = getpid();
  printf("\n My identifier is ID = [%d]\n", id);
  while (1)
    ;
  return 0;
}