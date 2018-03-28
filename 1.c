#include<stdio.h>

void main(){

FILE *fp;
fp=fopen("doc.txt","r");
char ch;
while(1){
if(fp==NULL){
printf("file doesn't exist\n");
break;
}

else
{
ch=getc(fp);
if(ch==EOF)
break;
putchar(ch);

}
}
}




