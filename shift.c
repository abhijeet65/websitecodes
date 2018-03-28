#include<stdio.h>
void main(){
while(1){
int n;
printf("enetere the size of array\n");
scanf("%d",&n);

int a[n];
int i,pos,item;
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("eneter the element to delete\n");
scanf("%d",&item);
for(i=0;i<n;i++){
if(a[i]==item){
pos=i;
break;
}
}
int temp[n-1];
for(i=0;i<n;i++)
{
if(i<pos)
temp[i]=a[i];
else
temp[i]=a[i+1];
}

printf("new shifted array\n");
for(i=0;i<n-1;i++)
printf("%d ",temp[i]);
}
}
