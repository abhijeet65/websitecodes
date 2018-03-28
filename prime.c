#include<stdio.h>

int primenum(int x){
int j,flag=1;
for(j=2;j<x;j++){
if(x%j==0){
flag=0;
}
else
continue;

}
if(flag==0)
return 0;

}

void main(){
int n,m,i,j;
printf("enetr the limits\n");
scanf("%d%d",&n,&m);
int c,k=0;
int a[10];
for(i=n;i<=m;i++){
c=1;
c=primenum(i);
if(c==1)
a[k++]=i;
}
for(j=0;j<k;j++)
printf("%d ",a[j]);


}





