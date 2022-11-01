#include <stdio.h>
#include <time.h>

int main() {
  time_t now;

  time(&now);

  printf("The computer computes the time as: %ld\n", now);
  printf("%s\n", ctime(&now));
}
