#include<stdio.h>

/*
1      1
 2    2
  3  3
   4
  3  3
 2    2
1      1
*/





void main(){
int n;
printf("enetr the rows\n");
scanf("%d",&n);
int i,j,k;


for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf(" ");
printf("%d",i);

for(j=2*n-2*i;j>=1;j--)
printf(" ");
printf("%d",i);
printf("\n");
}
for(i=1;i<=n+1;i++)
printf(" ");
printf("%d\n",n+1);

for(i=n;i>=1;i--)
{
for(j=i;j>=0;j--)
printf(" ");
printf("%d",i);

for(j=2*n-2*i;j>=1;j--)
printf(" ");
printf("%d",i);
printf("\n");
}



}


