#include <string.h>
#include <stdio.h>

void foobar() {
  printf("%s\n", "hijacked!");
}

void show_msg(char *str) {
  char buff[3];
  strcpy(buff, str);
  printf("%s\n", "copied");
}

void main(int argc, char *argv[]) {
  printf("%s\n", "start");
  show_msg(argv[1]);
  printf("%s\n", "end");
}
