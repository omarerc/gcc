#include <stdio.h>

int main()
{
  // Load file to the system
  FILE *fp = fopen("text-files/read-file-sample.txt", "r");

  // Reading process loop
  int ch = getc(fp);
  while (ch != EOF)
  {
    putchar(ch);

    // Show File in screen
    ch = getc(fp);
  }

  if (feof(fp))
    printf("\nEnd of file reached.");
  else
    printf("\nSomething went wrong.");
  fclose(fp);

  getchar();
  return 0;
}