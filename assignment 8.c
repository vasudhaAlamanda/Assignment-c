#include<stdio.h>
#include<math.h>
void main()
{
float weight,height,BMI;
printf("Enter weight in kg,height in m");
scanf("%f%f",&weight,&height);
BMI=weight/pow(height,2);
if(BMI<18.5)
{
printf("%.2f is BMI",BMI);
printf("\nUnderweight");
}
else if(BMI<25)
{
printf("%.2f is BMI",BMI);
printf("\nNormal");
}
else if(BMI<30)
{
printf("%.2f is BMI",BMI);
printf("\nOverweight");
}
else
{
printf("%.2f is BMI",BMI);
printf("\nObese");
}
}

