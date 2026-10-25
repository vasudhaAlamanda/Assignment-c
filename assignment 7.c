#include<stdio.h>
void main()
{
int marks;
printf("Enter marks");
scanf("%d",&marks);
if((marks<0)||(marks>100))
{
printf("Invalid marks");
}
else if(marks>=90)
{
printf("O Grade");
}
else if(marks>=80)
{
printf("A+ Grade");
}
else if(marks>=70)
{
printf("A Grade");
}
else if(marks>=60)
{
printf("B Grade");
}
else if(marks>=50)
{
printf("C Grade");
}
else
{
printf("Fail");
}
}