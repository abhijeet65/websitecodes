#include<stdio.h>

void main(){
int i,j,n,k;
printf("enter the rows\n");
scanf("%d",&n);
for(i=0;i<=n;i++){

for(j=n;j>=i;j--)
printf(" ");
for(k=1;k<=i;k++)
printf("*");
printf("\n");
}

}

