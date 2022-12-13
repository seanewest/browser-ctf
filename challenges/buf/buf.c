#include <stdio.h>
#include <string.h>

//Welcome to this challenge!
//
//The goal here is to overflow the string s
//such that it changes the value of x to 
//be 106 (instead of 0 which it is initially)
//
//The executable is already compiled, so no
//changing the code!
//
//Good Luck!!

int main(int argc, char ** argv) {
  int x = 0;
  char s[6] = "hello";

  //strcpy(s, argv[1]);
  //this is manually doing a strcpy
  for(int i=0; i<strlen(argv[1]); i++) {
    s[i] = argv[1][i];
  }

  printf("x: %p\n", &x);
  printf("s: %p\n", s);
  printf("%d\n", x);
  printf("s value: %s\n", s);

  if (x == 106) {
    printf("You got it!\n");
  } else {
    printf("You have not completed the challenge\n");
  }

  return 0;
}
