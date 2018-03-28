#include<stdio.h>
#include<time.h>
void main(){
int i;
clock_t start,end;
double time;
int sum=0;

start=clock();
for(i=0;i<=50000;i++){
sum=sum+i;
}
printf("sum=%d \n",sum);
end=clock();
time=((double)(end-start));
printf("%lf",time);
}

