#include<iostream>
using namespace std;
//single inheritance
class A{
    public:
    void Afunc(){
        cout<<"Func A"<<endl;
    }
};
class B : public A{
//public and protected members only
    void Bfunc(){
        cout<<"Func B"<<endl;
    }
};
//multiple inheritance
class C {
    public:
    void Cfunc(){
        cout<<"Func C"<<endl;
    }
};

class D: public A,public C{
    public:
};
//multilevel inheritance
class E:public B{
    public:
};
//Hybrid inheritance
//Hierarchial inheritance
int main(){
    B b;
    b.Afunc();
    D d;
    d.Afunc();
    d.Cfunc();
    return 0;
}