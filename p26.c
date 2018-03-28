#include<stdio.h>

/*
*    *    *
**   **   **
***  ***  ***
**** **** ****
*/


void main(){

int n;
printf("eneter the rows\n");
scanf("%d",&n);

int i,k,j;
for(i=0;i<n;i++){

for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");

for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");

for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");
for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");
for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");
for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");
for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>=0;k--)
printf(" ");


printf("\n");
}
}
