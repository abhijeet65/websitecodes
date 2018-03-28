#include<stdio.h>

void main(){
int n;
printf("entre the rows \n");
scanf("%d",&n);
int i,j,c;

for(i=1;i<=n;i++){

for(j=1;j<=i;j++){
c=i;
if(j==1 || j==i)
printf("%d",i);
while(c--)
printf("");

}
printf("\n");
}
}



