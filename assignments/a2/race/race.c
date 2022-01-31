#include "stdio.h"

int main() {
  int laps;
  float distance, total_time = 0;

  // get distance
  do {
    printf("Enter the distance in km: ");
    scanf("%f", &distance);

    if (distance < 0) {
      printf("Error: Value cannot be negative\n");
    }
  } while (distance < 0);

  // get laps
  do {
    printf("Enter the number of laps: ");
    scanf("%d", &laps);

    if (laps < 0) {
      printf("Error: Value cannot be negative\n");
    }
  } while (laps < 0);

  for (int i = 1; i <= laps; i++) {
    float lap_speed;

    // get lap *i*'s speed
    do {
      printf("Enter the speed of lap %d: ", i);
      scanf("%f", &lap_speed);

      if (lap_speed < 0) {
        printf("Error: Value cannot be negative\n");
      }
    } while (lap_speed < 0);

    total_time += distance / lap_speed;
  }

  // print heading
  printf("%-10s %-20s %-20s %-20s\n", "# of Laps", "Total Distance",
         "Average Speed", "Total Time");

  // print divider
  for (int i = 0; i < 70; i++) {
    printf("*");
  }
  printf("\n");

  // print data
  printf("%-10d %-20f %-20f %-20f\n", laps, distance * laps,
         (distance * laps) / total_time, total_time);

  return 0;
}
