#include<stdio.h>

void main(){
int n;
printf("enetr the rows\n");
scanf("%d",&n);

int i,j,k,c=1;

for(i=0;i<n;i++){

for(j=1;j<=n-i;j++)
printf(" ");

for(k=0;k<=i;k++)
{
if(i==0 || k==0)
c=1;
else
c=c*(i-k+1)/k;
printf("%d ",c);

}
printf("\n");
}
}


