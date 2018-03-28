#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
for(i=0;i<=n;i++){

for(j=i;j>=0;j--)
printf("%d ",i);
printf("\n");
}
}

