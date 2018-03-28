#include<stdio.h>

void main(){
int n,m,i,j,k;
printf("enetr the rows and coloumn of 1st matrix\n");
scanf("%d%d",&n,&m);
int a[n][m];
printf("entre the elemnts\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
int x,y;
printf("enetr the rows and coloumn of 2nd matrix\n");
scanf("%d%d",&x,&y);
int b[x][y];
printf("entre the elemnts\n");
for(i=0;i<x;i++){
for(j=0;j<y;j++)
scanf("%d",&b[i][j]);
}

int c[n][y];
for(i=0;i<n;i++){
for(j=0;j<y;j++){
c[i][j]=0;
for(i=0;i<n;i++){
for(j=0;j<y;j++){
for(k=0;k<m;k++)
c[i][j]+=a[i][k]*b[k][j];
}
}
}
}
printf("required matrix is\n");
for(i=0;i<n;i++){
for(j=0;j<y;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}


