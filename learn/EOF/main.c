#include <stdio.h>

/*
int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("Fahr Celsius\n%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}

int main()
{
  float celsius, fahr;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;

  while (celsius <= upper) {
    fahr = (celsius * 1.8) + 32;
    printf("Celsius Fahr\n%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}

int main()
{
  float celsius, fahr, lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = upper;

  while (celsius >= lower) {
    fahr = (celsius * 1.8) + 32;
    printf("Celsius Fahr\n%7.0f %6.1f\n", celsius, fahr);
    celsius = celsius - step;
  }
  return 0;
}

//book method

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  int fahr;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
  }
  return 0;
}  

*/