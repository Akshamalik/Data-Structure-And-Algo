//Class declaration
//High level language --More close to machine language 
//C Vs C++ .C++ adds to C feature like classes(feature to enable creation of abstract data type),polymorphism(function and operator overloading)
//OOPs language
//Bjarne Stroustup
#include<iostream>
using namespace std;
//classes have objects that have same data type as the class
//constructors are invoked as soon the class objects is created

class student{
    //by default data members are private
    string address;
    public:
    string name;
    int age;
    bool gender;
    void setaddress(string s){
        address=s;
    }
    void printInfo(){
        cout<<"name"<<name;
        cout<<"age"<<age;
        cout<<"gender"<<gender;
    }
    void getaddress(){
        cout<<address<<" ";
    }
    student()
    {
        cout<<"default constructor"<<endl;
    }
    student(string s,int a,int b)
    {
        cout<<"parametrized constructor"<<endl;
        name=s;
        age=a;
        gender=b;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    //private data members can only be accessed inside the class
    bool operator==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

    ~student(){
        cout<<"destructor"<<endl;
    }
};


int main(){

    // student arr[3];
    // for(int i=0;i<3;i++){
    //     string s;
    //     cin>>s;
    //     arr[i].setaddress(s);
    //     cin>>arr[i].name;
    //     cin>>arr[i].age;
    //     cin>>arr[i].gender;
    // }
    // student a;
    // a.name='Tim';
    // a.age=1;
    // a.gender=1;
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    student a("aksha",34,1);
    a.printInfo();
    student b;
    student c=a;
    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}
