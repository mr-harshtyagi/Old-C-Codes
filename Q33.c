#include <stdio.h>


int main()
{
    int a,b;
    char x;
 printf("Enter two integers:");
 scanf("%d %d",&a,&b);
 printf("Enter operation: ");
 scanf("\n%c",&x);
 switch(x)
 {
  case '+': 
      printf("Output :%d\n",(a+b)); break;
  case '-':
        printf("Output :%d\n",(a-b)); break;
  case '*':
        printf("Output :%d\n",(a*b)); break;
  case '/':
     (b)?printf("Output :%d\n",(a/b)):printf("ERROR: Divide by Zero\n"); 
     break;

  default:
       printf("Wrong Input!!!\n");


 }

return 0;
}