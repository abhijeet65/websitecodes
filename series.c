#include<stdio.h>
#include<math.h>

void main(){
int n;
printf("enete the number of terms\n");
scanf("%d",&n);

int i;
int sum=0;
for(i=1;i<n;i++){

sum+=pow(i,i);
}
printf("value of series %lf \n",pow(3,3));
}

