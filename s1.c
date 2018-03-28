#include<stdio.h>
#include<string.h>

void main(){
char str[20];
printf("eneter the string\n");
scanf("%s",str);
printf("\n%s",str);
int i=0;
while(str[i]!='\0')
i++;
printf("\nnumber of letters=%d \n",i);
char s1[i]={'a'};
int l;
l=i;
int k=0;
for(i=0;i<l;i++){
k=l-i;
s1[i]=str[k];
}
s1[i]='\0';
printf("%s",s1);



}
