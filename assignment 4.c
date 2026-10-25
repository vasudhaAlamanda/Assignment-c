#include<stdio.h>
void main()
{
float oa,d,dc,pa;
int membertype;
printf("Enter oa,membertype");
scanf("%f%d",&oa,&membertype);
if(oa>=500)
 {
 dc=0;
   if(membertype==1)
    {
     d=(0.10)*oa;
     }
  }
else 
{
 dc=50;
 d=0;
}
printf("%.2f is pa",pa=oa-d+dc); 
}
