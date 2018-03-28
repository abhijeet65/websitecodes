#include<stdio.h>

void main(){
int n;
printf("enetr the rows\n");
scanf("%d",&n);
int i,j,c=1;

for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==1 || i==n)
printf("%d",c);
else if(j==1 || j==n)
printf("%d",c); 
else
printf(" ");
}
printf("\n");
}
}
