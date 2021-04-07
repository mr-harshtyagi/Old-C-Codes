#include <stdio.h>

//completed
int main()
{
     int a;

    printf("Enter precision value\n");
    scanf("%d",&a);
    printf("\nFahrenheit\t Celsius\n");
    printf("  0\t\t %0.*f\n",a,(5.0/9.0)*(0-32));
    printf(" 20\t\t %0.*f\n",a,(5.0/9.0)*(20-32));
    printf(" 40\t\t %0.*f\n",a,(5.0/9.0)*(40-32));
    printf(" 60\t\t %0.*f\n",a,(5.0/9.0)*(60-32));
    printf(" 80\t\t %0.*f\n",a,(5.0/9.0)*(80-32));
    printf("100\t\t %0.*f\n",a,(5.0/9.0)*(100-32));
   

return 0;
}