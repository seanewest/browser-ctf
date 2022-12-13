#include <stdio.h>
#include <stdlib.h>

int c;
FILE *file;

int main(int argc, char ** argv) {
  file = fopen(argv[1], "r");
  if (file) {
      while ((c = getc(file)) != EOF)
          putchar(c);
      fclose(file);
  }

  return 0;
}
