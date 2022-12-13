#include <string.h>
#include <stdio.h>

int main() {
  char pass[100];
  printf("guess the password!!\n");
  scanf("%s", pass);
  if (strcmp(pass,"seizetheday") == 0) {
    printf("You got it!!\n");
  } else {
    printf("Try Again!\n");
  }

  return 0;
}
