#include<stdio.h>
#include<string.h>


void main(){
int x;
printf("names list number\n");
scanf("%d",&x);
char str[x][40];
int i;
char st[20];
printf("enetr the string of %d names\n",x);
for(i=0;i<x;)
scanf("%s",str[i++]);


int c=0,j;

for(i=0;i<x;i++)
{
for(j=0;j<x-i;j++)
{
if(strcmp(str[j-1],str[j])>0)
{
strcpy(st,str[j-1]);
strcpy(str[j-1],str[j]);
strcpy(str[j],st);
}
}
}
printf("soreted names are=\n");
for(i=0;i<x;i++){
printf("%s",str[i]);
printf("\n");
}

}
