#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

float areaOfCircle(float r)
{
  float area = M_PI * r * r;
  printf("r = %f, area = %f\n", r, area);
  return area;
}

int main(int argc, char* argv[])
{
  float start, end;

  if (argc == 3)
  {
    start = sscanf(argv[1], "%f", &start);

    if (start != 1)
    {
      printf("1st arg not a float, you must enter 2 floats\n");
      return 1;
    }

    end = sscanf(argv[2], "%f", &end);
    if (end != 1)
    {
      printf("2nd arg is not a float, you must enter 2 floats\n");
      return 1;
    } 

    start = atof(argv[1]);
    end = atof(argv[2]);

  }
  else 
  {
    if ((argc != 3) && (argc != 1))
    {
      printf("Incorrect number of arguments, enter 2 floats\n");
      return 1;
    }

    char input[256];

    printf("\nInitial Radius: ");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &start) == 1) break;
      printf("Not a valid input, enter a float: ");
    }

    printf("Final Radius: ");
    while (1)
    {
      fgets(input, 256, stdin);
      if (sscanf(input, "%f", &end) == 1) break;
      printf("Not a valid input, enter a float: ");
    }

  }

  printf("\nstart r = %f, end r = %f\n\n", start, end);

  for (float i = start; i <= end; i++)
  {
    areaOfCircle(i);
  }
}
