#include <string.h>
#include <stdio.h>

int main() {
  char pass[100];
  char mother[100];
  mother[0] = 'P';
  mother[1] = 'a';
  mother[2] = 'm';
  mother[3] = 0;
  char father[100];
  father[0] = 'J';
  father[1] = 'o';
  father[2] = 'h';
  father[3] = 'n';
  father[4] = 0;
  char disease[100];
  disease[0] = 'J';
  disease[1] = 'a';
  disease[2] = 'n';
  disease[3] = 'i';
  disease[4] = 't';
  disease[5] = 'u';
  disease[6] = 's';
  disease[7] = 0;
  printf("Medical Records Database: Please login (last,first)\n");
  scanf("%s", pass);

  if (strcmp(pass,"Jackson,Amy") == 0 ||
      strcmp(pass,"Walker,Kay") == 0 ||
      strcmp(pass,"White,Jebrah") == 0 ) {
    printf("Please enter date of birth mm/dd/yyyy\n");
    scanf("%s", pass);
    if (pass[0] == '0' && pass[1] == '1' && pass[3] == '3' && pass[4] == '1' && pass[6] == '1' && pass[7] == '9' && pass[8] == '9' && pass[9] == '2') {
      printf("Printing records...\n");
      printf("Doctor: %s\n", mother);
      printf("Emergency Contact: %s\n", father);
      printf("Disease: %s\n", disease);
    } else {
      printf("Invalid date of birth\n");
      return 1;
    }
  } else {
    printf("Invalid login\n");
  }

  return 0;
}
