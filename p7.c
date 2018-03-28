#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c,k;
for(i=n;i>=1;i--){
c=1;
k=2;
for(j=i;j>=1;j--){
if(i%2!=0){
printf("%d ",c);
c=c+2;
}
if(i%2==0){
printf("%d ",k);
k=k+2;
}
}
printf("\n");

}
}

