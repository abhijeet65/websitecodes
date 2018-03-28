#include<stdio.h>

void main(){
int n;
printf("eneter the size of array\n");
scanf("%d",&n);
printf("eneert the elemnts of array\n");
int i,a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int zero=0;
for(i=0;i<n;i++){
if(a[i]==0)
zero++;
}
int b[n];
int k;
for(k=0;k<zero;k++)
b[k]=0;

for(i=0;i<n;i++){
if(a[i]!=0)
b[k++]=a[i];
}
for(i=0;i<n;i++)
printf("%d ",b[i]);

}

