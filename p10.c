#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c,k;

for(i=1;i<=n*2;i=i+2){
c=1;
for(j=1;j<=i;j++){

if(j<=(i/2))
{
printf("%d ",c++);

}
else{
printf("%d ",c--); 
}
}
printf("\n");

}
}

