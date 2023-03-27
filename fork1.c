#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
void fork1() {
  printf("\n [%d] L0 \n", getpid());
  if (fork() != 0) {
    printf("\n [%d] L1 \n", getpid());
    if (fork() != 0) {
      printf("\n [%d] L2 \n", getpid());
      fork();
    }
  }
  printf("\n [%d] Bye \n", getpid());
}
int main() {
  fork1();
  return 0;
}