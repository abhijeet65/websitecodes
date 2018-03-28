#include<stdio.h>

void main(){
int n;
printf("enetr the day number\n");
scanf("%d",&n);
int year,month,days,week;

year=n/365;
week=(n%365)/7;
days=(n%365)%7;
printf("%d day corespond to %d year %d week and %d days",n,year,week,days);

}

