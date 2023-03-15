#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
  char *str = NULL;
  int n;
  
  do {
    printf("Enter Value: ");
    scanf("%d", &n);

    str = malloc(n * sizeof(char*));
    for (int x = 0; x < n; x++) {
      strcat(str, " ");
    }

    if (n > 0) {
      while (n > 0) {
        str[n] = '#';
        printf("%s\n", str);
        n--;
      }
    } else {
      printf("Error: Please insert positive number over 0.\n");
    }
  } while (n < 0);
 
}