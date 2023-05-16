#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date
{
  int y, m, d;
};

struct ContactInfo
{
  char *firstName;
  char *lastName;
  struct Date dob;
};

int main()
{
  struct ContactInfo c1 = 
    { "Omar", "Ramirez", { 1983, 6, 18 } };

  char *firstName = malloc(20 * sizeof(char));
  char *lastName = malloc(20 * sizeof(char));
  int y, m, d;

  // Second Contact Scan
  printf("First Name: ");
  scanf("%[^\n]%*c", firstName);
  printf("Last Name: ");
  scanf("%[^\n]%*c", lastName);
  printf("Birth Year: ");
  scanf("%d", &y);
  printf("Birth Month: ");
  scanf("%d", &m);
  printf("Birth Day: ");
  scanf("%d", &d);

  // Create Contact
  struct ContactInfo c2;
  c2.firstName = malloc(20 * sizeof(char));
  c2.lastName = malloc(20 * sizeof(char));

  strcpy(c2.firstName, firstName);
  strcpy(c2.lastName, lastName);
  c2.dob.y = y;
  c2.dob.m = m;
  c2.dob.d = d;

  free(firstName);
  free(lastName);

  // Create Contact
  struct ContactInfo* c3;
  c3 = malloc(sizeof(struct ContactInfo));
  c3->firstName = malloc(20 * sizeof(char));
  c3->lastName = malloc(20 * sizeof(char));
  strcpy(c3->firstName, "");
  strcpy(c3->lastName, "");

  while ((getchar()) != '\n');

  // Third Contact Scan
  printf("First Name: ");
  scanf("%[^\n]%*c", c3->firstName);
  printf("Last Name: ");
  scanf("%[^\n]%*c", c3->lastName);
  printf("Birth Year: ");
  scanf("%d", &c3->dob.y);
  printf("Birth Month: ");
  scanf("%d", &c3->dob.m);
  printf("Birth Day: ");
  scanf("%d", &c3->dob.d);

  // Printing Contact
  printf("Name: %s %s\nBirthday: %d/%d/%d\n",
    c1.firstName, c1.lastName, c1.dob.y, c1.dob.m, c1.dob.d);

  printf("Name: %s %s\nBirthday: %d/%d/%d\n",
    c2.firstName, c2.lastName, c2.dob.y, c2.dob.m, c2.dob.d);

  printf("Name: %s %s\nBirthday: %d/%d/%d\n",
    c3->firstName, c3->lastName, c3->dob.y, c3->dob.m, c3->dob.d);
 
  // Releaseing Dynamic Memory
  //free(c1.firstName);
  //free(c1.lastName);
  //free(c2.firstName);
  //free(c2.lastName);
  free(c3->firstName);
  free(c3->lastName);
  free(c3);

}