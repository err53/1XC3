#include "ctype.h"
#include "stdbool.h"
#include "stdio.h"
#include "string.h"

int main() {
  char postalCode[6];
  printf("Enter postal code: ");
  scanf("%[^\n]", postalCode);
  if (strlen(postalCode) != 7) {
    printf("Invalid postal code\n");
    return 0;
  }
  if (postalCode[3] != ' ') {
    printf("Invalid postal code ree\n");
    return 0;
  }
  for (int i = 0; i < 7; i += 2) {
    if (!isalpha(postalCode[i])) {
      printf("Invalid postal code jkl;\n");
      return 0;
    }
    if (i == 2) i++;
  }
  for (int i = 1; i < 7; i += 2) {
    if (!isdigit(postalCode[i])) {
      printf("Invalid postal code asdf\n");
      return 0;
    }
    if (i == 1) i++;
  }
  printf("Valid postal code\n");
  return 0;
}
