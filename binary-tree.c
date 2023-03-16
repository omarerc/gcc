#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  printf("Printing Message:\n");
  if (argc > 0)
  {
    for (int i = 0; i < argc; i++)
    {
      printf("%s\n", argv[i]);
    }
  }
  else
  {
    printf("No Message to share!");
  }
}