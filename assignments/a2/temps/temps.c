#include "stdio.h"

#define NUMS 3

int main() {
  // print header
  printf(">-----------------Temperature Analyzer -------------------<\n");

  // get temperatures for NUMS days
  for (int i = 1; i <= NUMS; i++) {
    int high, low;
    while (1) {
      printf("Enter the high value for day %d: ", i);
      scanf("%d", &high);
      printf("Enter the low value for day %d: ", i);
      scanf("%d", &low);

      // error checking
      if (high > low && high < 41 && low > -41) {
        // inputs are valid
        break;
      } else {
        // inputs are invalid
        printf(
            "Incorrect values, temperatures must be in the range -40 to 40, "
            "high must be greater than low\n");
      }
    }
  }
  return 0;
}
