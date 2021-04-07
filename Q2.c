#include <stdio.h>

int main()
{
    char c;
   printf("Enter a character\n");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
      c=' ';
    printf("Output is : %c\n",c);

return 0;
}