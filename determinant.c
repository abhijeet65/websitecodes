#include<stdio.h>

void main(){
int i,j,a[3][3];

printf("enetre the elsemts 3x3 \n");
for(i=0;i<3;i++){
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
int determinant;

determinant=(a[0][0]*((a[2][2]*a[1][1])-(a[2][1]*a[1][2])))-(a[1][1]*((a[2][2]*a[1][0])-(a[2][0]*a[1][2])))+(a[1][2]*((a[2][1]*a[1][0])-(a[2][0]*a[1][1])));
printf("rest=ult is\n");
printf("determinant=%d\n",determinant);
}

