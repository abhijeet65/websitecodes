#include<stdio.h>

void main(){
int i,j,n,k;
printf("enter the rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++){

for(j=1;j<=i;j++)
printf(" ");
for(k=n;k>=i;k--)
printf("* ");
printf("\n");
}

}

