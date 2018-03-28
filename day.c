#include<stdio.h>



void main(){
struct date d;
getdate(&d);

printf("current date is %d / %d / %d",d.da_day,d.da_mon,d.da_year);
}

