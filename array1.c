#include<stdio.h>


void main(){
int n;
printf("eneter te n\n");
scanf("%d",&n);
int a[n];

int i,max=-1,min=9999;
printf("eneter the array lements\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(max<=a[i])
max=a[i];
if(min>a[i])
min=a[i];
}

int b[max];

for(i=min;i<=max;i++){
b[i]=0;
}
for(i=0;i<n;i++){
b[a[i]]++;

}
for(i=min;i<=max;i++){
if(b[i]==1)
printf("%d ",i);

}
}
