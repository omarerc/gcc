#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
  char *name[20];
  char *dob[10];
  char *phone[14];
  

  // Read contact info and store in variables
  printf("Name: ");
  scanf("%[^\n]%*c", name);
  printf("Birthday (MM/DD/YYYY): ");
  scanf("%[^\n]%*c", dob);
  printf("Phone Number: ");
  scanf("%[^\n]%*c", phone);

  // Print contact card
  printf("Name: %s\n", name);
  printf("Birthday: %s\n", dob);
  printf("Phone: %s\n", phone);

  #if __STDC_VERSION__ >=  201710L
    printf("We are using C18!\n");
  #elif __STDC_VERSION__ >= 201112L
    printf("We are using C11!\n");
  #elif __STDC_VERSION__ >= 199901L
    printf("We are using C99!\n");
  #else
    printf("We are using C89/C90!\n");
  #endif
    
  // Error or imposible.
  return 0;
}