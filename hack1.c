#include<iostream>

int fact(int n){
int facto=1,i;
for(i=1;i<=n;i++)
facto=facto*i;
return facto;
}



int main(){
cout<<"inter the string to find permutations\n";
char str[20];
cin>>str;
int i=0,j,k=0;
while(str[i]!=0){
i++;
}
int factorial;
factorial=fact(i);
for(i=0;str[i]!='\0';i++){
int c=0;
for(j=0;str[j]!='\0';j++){
if(i!=j){
if(str[i]==str[j])
c++;
}
}
if(c!=0)
factorial=factorial/fact(c);
}
cout<<"\n"<<factorial;
return 0;
}
