#include<stdio.h>

/*
*    *    *
**   **   **
***  ***  ***
**** **** ****
*/


void main(){

int n;
printf("eneter the rows\n");
scanf("%d",&n);

int i,k,j,z;
for(z=n;z>0;z--){
for(i=n-z;i>0;i--){

for(j=0;j<i;j++)
printf("*");
for(k=n-i;k>0;k--)
printf(" ");





}
printf("\n");
}
}
