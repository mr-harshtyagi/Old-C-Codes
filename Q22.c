#include <stdio.h>


int main()
{
 int a,b,c,d;
 printf("Enter four integers:\n");
 scanf("%d %d %d %d",&a,&b,&c,&d);
 printf("Maximum:");
 if((a>=b)&&(a>=c)&&(a>=d))
 {
     printf("%d\n",a);
    
}
  if((b>=a)&&(b>=c)&&(b>=d))
    { 
        printf("%d\n",b);
 
    }
   if((c>=b)&&(c>=a)&&(c>=d))
     {printf("%d\n",c);
   
     }
    if((d>=b)&&(d>=c)&&(d>=a))
    { printf("%d\n",d);
   
    }

return 0;
}