#include<stdio.h>

void main(){
int i,j,n;
printf("enter the rows\n");
scanf("%d",&n);
int c,k,p;
p=n;
for(i=1;i<=n*2;){
c=1;
for(k=p;k>=0;k--)
printf(" ");
for(j=1;j<=i;j++){

if(j<=(p/2))
{

printf("%d ",c++);

}
else{
printf("%d ",c--); 
}
}
printf("\n");
if(p<=n/2){
i=i+2;
p++;
}
else{
i--;
p--;
}
}
}

