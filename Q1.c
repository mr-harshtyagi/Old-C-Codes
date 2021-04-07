#include <stdio.h>


int main()
{
  int dob,birth_month,birth_year;
  printf("Enter your date of birth in dd:mm:yyyy format\n");
  scanf("%d:%d:%d:",&dob,&birth_month,&birth_year);
  printf("Day %d ,Month %d and year %d\n",dob,birth_month,birth_year);

return 0;

}