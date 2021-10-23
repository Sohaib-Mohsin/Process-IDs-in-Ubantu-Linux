#include <stdio.h>
#include <unistd.h>

int main(){

  printf("Parent Process Id is %d\n", getppid());
  printf("Child Process Id is %d\n", getpid());

  return 0;
}
