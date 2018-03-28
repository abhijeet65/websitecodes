#include<stdio.h>
#include<math.h>


void main(){
int n,m,i,j,k;
printf("enetr the jugs capacity and litres to calculate\n");
scanf("%d%d%d",&n,&m,&k);
int flag=0;
int min=100000;int sum=0;
for(i=-10;i<=10;i++){
for(j=-10;j<=10;j++){
if((n*i+m*j)==k)
{
flag=1;
break;
}
}
if(flag==1){
printf("%d %d",i,j);
printf("\n");
printf("min=%d\n",min);
}
}
}
