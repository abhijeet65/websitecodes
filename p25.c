#include<stdio.h>

void main(){
int n;

printf("enetre the rows\n");
scanf("%d",&n);
int i,j,k;
for(i=0;i<=n;i++){

for(k=n-i;k>=0;k--)
printf("*");
for(j=i;j>=0;j--)
printf(" ");
for(j=i;j>=0;j--)
printf(" ");
for(j=n-i;j>=0;j--)
printf("*");

printf("\n");




}

}

