#include<stdio.h>

void main(){
int n;
printf("enetr the size of array\n");
scanf("%d",&n);
int a[n];
int i;
printf("enetr thea array elemts\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int j,temp;
for(i=0;i<n;i++){

j=i+1;
while(j>=0 && a[j]<a[j-1]){
temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
j--;
}

}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
