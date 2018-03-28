#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c;
for(i=1;i<=n;i++){
c=i;
for(j=i;j>=1;j--)
{
c=j;
printf("%d ",c--);
}
printf("\n");
}
}

