#include<stdio.h>


void main(){
int i,j,k,n,c,z=0;

printf("enter the rows\n");
scanf("%d",&n);

for(i=0;i<=n;i++){

for(j=0;j<=n-i;j++)
printf(" ");

for(j=i;j>=0;j--)
printf("%d ",j);
for(j=1;j<=i;j++)
printf("%d ",j);
printf("\n");
}

}




