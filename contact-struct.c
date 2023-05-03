#include <stdio.h>
#include <string.h>

struct Date
{
  int y, m, d;
};

struct ContactInfo
{
  char firstName[20];
  char lastName[20];
  struct Date dob;
};

int main()
{
  struct ContactInfo c1 = 
    { "Omar", "Ramirez", { 1983, 6, 18 } };

  char firstName[20];
  char lastName[20];
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

  strcpy(c2.firstName, firstName);
  strcpy(c2.lastName, lastName);
  c2.dob.y = y;
  c2.dob.m = m;
  c2.dob.d = d;

  printf("Name: %s %s\nBirthday: %d/%d/%d\n",
    c1.firstName, c1.lastName, c1.dob.y, c1.dob.m, c1.dob.d);

  printf("Name: %s %s\nBirthday: %d/%d/%d\n",
    c2.firstName, c2.lastName, c2.dob.y, c2.dob.m, c2.dob.d);

}