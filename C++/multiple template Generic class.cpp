#include<iostream>

using namespace std;

template<class t,class t1>class sajib{

t a;
t1 b;
public:

   sajib(t x,t1 y){

     a=x; b=y;
   }
  void display(){

   cout<<"a="<<a<<endl<<"b="<<b<<endl;
   }

};
int main(){

 sajib<string,int>obj("sajib",23);///only  two type value pass
 sajib<float,int>obj1(56.23,23);
 obj.display();
 obj1.display();


}
