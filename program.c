#include <stdio.h>

char grade(int x)
{
  if (x<20) {
    return 'E';
  } else if (x<40) {
    return 'D';
  } else if (x<60) {
    return 'C';
  } else if (x<80) {
    return 'B';
  } else {
    return 'A';
  }
}

int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    float avg;
    int flag=0;
    printf("Enter marks in 5 subjects\n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    while((sub1>=0 && sub1<100)&&(sub2>=0 && sub2<100)&&(sub3>=0 && sub3<100)&&(sub4>=0 && sub4<100)&&(sub5>=0 && sub5<100))
    {
    flag=1;
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("Average marks are %0.3f\n",avg);
    printf("Grade is %c \n",grade(avg));
    break;
    }
    if(flag==0)
    printf("Inputs are Invalid i.e. not between 0 and 99\n");


return 0;
}