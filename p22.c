#include<stdio.h>

void main(){
int n;
printf("enter the rows\n");
scanf("%d",&n);
int i,j;
for(i=70;i>=65;i--){
for(j=i;j>=65;j--)
printf("%c",j);
printf("\n");
}
}

