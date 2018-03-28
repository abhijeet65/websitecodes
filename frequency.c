#include<stdio.h>

void main(){
int n;
printf("enetre the array size of 1st\n");
scanf("%d",&n);
int a[n],i;
printf("enetre the array elemnts\n");

for(i=0;i<n;i++)
scanf("%d",&a[i]);

int m;
printf("enetre the array size of 2nd\n");
scanf("%d",&m);
int b[m];
printf("enetre the array elemnts\n");

for(i=0;i<m;i++)
scanf("%d",&b[i]);

int c[n+m];
for(i=0;i<m+n;i++){
for(j=0;j<m;j++){
if(a[i]>b[j])
min=b[j];
pos=j;

}
if(min!=a[i]){
c[i]=min;
delete_array(b,pos);
}
else{
c[i]=a[i];
pos=i;
delete_array(a,pos);
}
}
}
void delete_array(int x[],int pos){







