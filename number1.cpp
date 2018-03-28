#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int num;
cout<<"eneter teh number\n";
cin>>num;
float a=12.23455;

cout<<setw(34)<<setfill('$')<<setprecision(2)<<a<<"\n";
cout<<setw(3)<<num<<"\n";
cout<<setw(2)<<setprecision(2)<<a<<"\n";
cout<<setw(10)<<hex<<num<<"\n";
}

