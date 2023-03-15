#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
  char *str = NULL; // line
  int n; // n prints
  
  do {
    printf("Enter Value: ");
    scanf("%d", &n);

    // Asign memory
    str = malloc(n * sizeof(char*));
    // Initiliaze string with blank space
    for (int x = 0; x < n; x++) {
      strcat(str, " ");
    }

    // Check if n is a positive number 
    if (n > 0) {
      // Print n lines hashes
      while (n > 0) {
        str[n] = '#';
        printf("%s\n", str);
        n--;
      }
      // Successful exit
      return 0;
    } else {
      printf("Error: Please insert positive number over 0.\n");
    }
  } while (n <= 0);

  // Error or imposible.
  return -1;
}