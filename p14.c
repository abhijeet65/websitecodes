#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c,k=1;
i=1;
for(;k<=n;){

for(j=1;j<=i;j++){
if(j%i!=0)
printf("%d*",i);
else
printf("%d",i);

}
printf("\n");
if(k <= n/2)
i++;
else
i--;
k++;
}
}

