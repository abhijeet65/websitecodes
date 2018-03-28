#include<stdio.h>

void main(){
int n,m,i,j;
printf("enter the row and column of matrix\n");
scanf("%d%d",&n,&m); 
int a[n][m];
printf("eneter the elemnts\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
int d[n][m];
printf("cloneing in process......\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
d[i][j]=a[i][j];
}
printf("\n");
for(i=0;i<n;i++){
for(j=0;j<m;j++)
printf("%d ",d[i][j]);
printf("\n");
}
int temp,k;

for(i=0;i<n;i++){
for(j=0;j<m;j++){
for(k=j+1;k<m;k++)
{
if(a[i][j]>a[i][k]){
temp=a[i][j];
a[i][j]=a[i][k];
a[i][k]=temp;
}
}
}

}
for(i=0;i<n;i++){
for(j=0;j<m;j++)
printf("%d ",a[i][j]);

printf("\n");
}

printf("---------------------------------------\n\n");
printf("now the second program starts that sorts the cloumns\n");

for(i=0;i<n;i++){
for(j=0;j<m;j++){
for(k=i+1;k<n;k++)
{
if(a[i][j]>a[k][j])
{
temp=a[i][j];
a[i][j]=a[k][j];
a[k][j]=temp;
}
}
}
}
printf("this is the sorting of the ealier sorted matrix that is row sorted\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d ",a[i][j]);
printf("\n");
}





printf("now this program sorts coloumn of dummy matrix\n"); 

for(i=0;i<n;i++){
for(j=0;j<m;j++){
for(k=i+1;k<n;k++)
{
if(d[i][j]>d[k][j])
{
temp=d[i][j];
d[i][j]=d[k][j];
d[k][j]=temp;
}
}
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
printf("%d ",d[i][j]);
printf("\n");
}










}

