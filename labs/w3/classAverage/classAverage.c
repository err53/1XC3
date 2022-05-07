#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // used for rng

#define CLASS_SIZE 20

int main() {
  float grades[CLASS_SIZE];
  float total, average;

  // initialize random number generator
  srand(time(NULL));

  // create random grades from 0-100

  for (int i = 0; i < CLASS_SIZE; i++) {
    grades[i] = (float)rand() / (float)RAND_MAX * 100;
  }

  // print grades
  printf("Student #\tGrade\n");
  printf("---------\t-----\n");
  for (int i = 0; i < CLASS_SIZE; i++) {
    printf("%d\t\t%.2f\n", i + 1, grades[i]);
  }
}
