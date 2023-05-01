#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp = fopen("text-files/write-mode-test-file.txt", "w");
  if (fp == NULL)
  {
    puts("Couldn't open file");
    exit(0);
  }
  else
  {
    fputs("This is a FileSurfingTest to verify if I can write into a file text.", fp);
    puts("Textfile was successfully written.");
    fclose(fp);
  }
  return 0;
}
