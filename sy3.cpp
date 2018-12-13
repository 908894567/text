#include <iostream>
using namespace std;
class Mammal{
public:
    virtual void speak(){cout<<"I am a Mammal"<<endl;}
};
class Dog:public Mammal{
public:
    void speak(){cout<<"I am a Dog"<<endl;}
};
int main(){
    Dog a;
    a.speak();
}