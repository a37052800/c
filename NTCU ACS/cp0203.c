#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  height = 12;
  length = 14;
  width = 11;
  volume = height * length * width;
  weight = volume * 100;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}