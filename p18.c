#include<stdio.h>

void main(){
int n,i,j,k,c;
printf("enetf the rows \n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
c=i;
for(j=n;j>=i;j--)
printf(" ");

for(k=i;c>=0;c--){
if(k==i || k==n-i)
printf("%d ",k++);
else
{
printf("%d ",k--);
}
}
printf("\n");

}
}

