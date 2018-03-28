#include<stdio.h>


void main(){
int n;
printf("eneter the rows\n");
scanf("%d",&n);
int i,j,k,bino;
for(i=0;i<n;i++){
for(j=n-i;j>0;j--)
printf(" ");
bino=1;
for(k=0;k<=i;k++)
{

if(k==0)
printf("1 ");
else{
bino=bino*(i-k+1)/k;
printf("%d ",bino);
}
}
printf("\n");
}
}
