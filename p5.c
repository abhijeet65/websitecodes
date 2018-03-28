#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c;
int k=1;
for(i=n;i>=1;i--){
c=k;
for(j=1;j<=i;j++)
printf("%d ",c++);
printf("\n");
k++;
}
}

