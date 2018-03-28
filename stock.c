#include<stdio.h>


void main(){
int n;
scanf("%d",&n);
int a[n];
int i,j,start,end;
printf("enetre the array elemnts\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int sum=0,max=-99999;
for(i=0;i<n;i++){

for(j=i+1;j<n;j++){

sum=a[j]-a[i];
if(sum>max){
max=sum;
start=i;
end=j;
}
}
}
printf("maximum profit=%d",max);

printf("buy stock on %d th day and sell on %d th day\n",start+1,end+1);

}

