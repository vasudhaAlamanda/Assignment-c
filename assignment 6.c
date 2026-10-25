#include<stdio.h>
void main()
{
int userID,password;
printf("Enter userID");
scanf("%d",&userID);
if(userID!=101)
{
printf("User is not found");
}
else
{
printf("Enter password");
scanf("%d",&password);
  if(password==4321)
  {
  printf("Login successful");
  }
  else
  {
  printf(" Incorrect Password");  
  }  
 }
}  