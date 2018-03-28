#include<iostream>
using namespace std;

class rectrangle{
public:
int length;
int breadth;
private:
int height;
public:
void volume(){
cout<<"volume is="<<length*breadth*height<<"\n";
}
void setheight(int x){
height=x;
}
int area();

};
int rectrangle :: area(){
return length*breadth;

}

int main(){

rectrangle r;
r.length=10;
r.breadth=20;
r.setheight(98);
r.volume();

int area=r.area();
cout<<area;
}

