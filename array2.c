


#include<stdio.h>


void main(){
int n;
printf("eneter te n\n");
scanf("%d",&n);
int a[n];

int i,max=-1,min=9999,j;
printf("eneter the array lements\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
int c=0;
for(i=0;i<n;i++){
c=0;
for(j=0;j<n;j++){
if(a[i]!=a[j])
c++;
}
if(c==n-1)
printf("%d ",a[i]);
}
}


