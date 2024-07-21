#include<iostream>
using namespace std;

string compareIfElse(int a, int b) {
     if(a>b){
		 return "greater";
	 }
	 else if(a<b){
		 return "smaller";
	 }
	 else{
		 return "equal";
	 }
}

int main(){
    int s,t;
    cin>>s>>t;
    cout<<compareIfElse(s,t)<<endl;
    return 0;
}
