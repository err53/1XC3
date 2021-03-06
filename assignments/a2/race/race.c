#include "stdio.h"

int main() {
  int laps;
  float distance, total_time = 0;

  // get laps
  do {
    printf("Enter the number of laps\n");
    scanf("%d", &laps);

    if (laps <= 0) {
      printf("The value of number of laps must be positive and non zero\n");
    }
  } while (laps <= 0);

  // get distance
  do {
    printf("Enter the distance of the lap\n");
    scanf("%f", &distance);

    if (distance <= 0) {
      printf("The value of distance must be positive and non zero\n");
    }
  } while (distance <= 0);

  // print heading
  printf("%-10s %-20s %-20s %-20s\n", "# of Laps", "Total Distance",
         "Average Speed", "Total Time");

  // print divider
  for (int i = 0; i < 70; i++) {
    printf("*");
  }
  printf("\n");

  // get lap data
  for (int i = 1; i <= laps; i++) {
    float lap_speed;

    // get lap *i*'s speed
    do {
      printf("Enter the speed of the car during lap %d: ", i);
      scanf("%f", &lap_speed);

      if (lap_speed <= 0) {
        printf("The value of the speed must be positive and non zero\n");
      } else {
        total_time += distance / lap_speed;
        printf("%-10d %-20.2f %-20.2f %-20.2f\n", i, distance, lap_speed,
               distance / lap_speed);
      }
    } while (lap_speed <= 0);
  }

  // print data
  printf("%-10s %-20.2f %-20.2f %-20.2f\n", "Total:", distance * laps,
         (distance * laps) / total_time, total_time);

  return 0;
}
