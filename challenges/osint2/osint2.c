#include <string.h>
#include <stdio.h>

int main() {
  char pass[100];
  char mother[100];
  mother[0] = 'J';
  mother[1] = 'a';
  mother[2] = 'n';
  mother[3] = 0;
  char father[100];
  father[0] = 'J';
  father[1] = 'o';
  father[2] = 'o';
  father[3] = 'n';
  father[4] = 0;
  char color[100];
  color[0] = 'R';
  color[1] = 'e';
  color[2] = 'd';
  color[3] = 0;
  printf("Pikes Peak Community College Database: Please login (last,first)\n");
  scanf("%s", pass);

  if (strcmp(pass,"Jackson,Jack") == 0 ||
      strcmp(pass,"White,Steven") == 0 ||
      strcmp(pass,"Adams,Joshua") == 0 ) {
    printf("Please enter password\n");
    scanf("%s", pass);
    printf("Invalid password\n");
    printf("Security Question: What is the street that you grew up on?\n");
    scanf("%s", pass);
    if (pass[0] == 'H' && pass[1] == 'e' && pass[2] == 'r' && pass[3] == 'b' && pass[4] == 'e' && pass[5] == 'r' && pass[6] == 't') {
      printf("Printing records...\n");
      printf("Doctor: %s\n", mother);
      printf("Emergency Contact: %s\n", father);
      printf("Favorite Color: %s\n", color);
    } else {
      printf("Security Question failed\n");
      return 1;
    }
  } else {
    printf("Invalid login\n");
  }

  return 0;
}
