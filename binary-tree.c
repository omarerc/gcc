#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if (argc > 0)
  {
    for (int i = 0; i++; i < argc)
    {
      printf("%s\n", argv[i]);
    }
  }
  else
  {
    printf("No Message to share!");
  }
}