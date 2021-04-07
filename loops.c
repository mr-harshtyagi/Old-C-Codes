#include<stdio.h>
void main()
{
    int i;
//for loop--entry controlled
for(i=0;i<=10;i++)
  printf("%d ",i);
  printf("\n");

//while loop--entry controlled
i=0;
while(i<=10)
{
printf("%d ",i);
i++;
}
printf("\n");

//do while loop --exit controlled loop
i=0;
do
{
    printf("%d ",i);
    i++;
} while (i<=10);
printf("\n");


}