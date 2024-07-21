#include<iostream>
using namespace std;

int dataTypes(string type) {
	if(type=="Float"){
		return sizeof(float);
	}
	else if(type=="Integer"){
		return  sizeof(int);
	}
	else if(type=="Long"){
		return  sizeof(long);
	}
	else if(type=="Double"){
		return  sizeof(double);
	}
	else if(type=="Character"){
		return sizeof(char);
	}
	return 0;
}

int main(){
    string t;
    cin>>t;
    cout<<dataTypes(t)<<endl;
    return 0;
}
