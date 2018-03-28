#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c;
for(i=n;i>=1;i--){
c=i;
for(j=i;j>=1;j--)
printf("%d ",c--);
printf("\n");
c=0;
}
}

