#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cin>>str;
    cout<<str;

    //different ways to declare
    string str1(5,'n');
    cout<<str1<<endl;

    //no space required
    string str2="akshamalik";
    cout<<str2<<endl;

    string str3;
    getline(cin,str3);
    cout<<str<<endl;
     
    str3.append(str1);
    cout<<str3<<endl;

    //or s1+s2

    //s1=s1+s2

    cout<<str3[0]<<endl;

    str2.clear();
    cout<<str2<<endl;

    //to compare
    string s1="abc";
    string s2="xyz";

    cout<<s2.compare(s1)<<endl;

    if(!s2.compare(s1))
    {
        cout<<"string are equal";
    }

    //empty function

    string s3="abc";
    s3.clear();
    if(s3.empty())
    {
        cout<<"string empty";
    }

    //erase

    str.erase(3,3)   //index,how many elements
    cout<<str<<endl;

    //to find substring

    cout<<str.find("sorry");  //return first index where it find it

    //to insert

    str.insert(2,"lol");

    cout<<str<<endl;

    //to length

    str.size() ;//str.length()

    //iterate

    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<endl;
    }

    string s=str.substr(6,4);

    cout<<s<<endl;

    //numeric string to integer

    string num="768";
    int x=stoi(num);
    cout<<x+2<<endl;


    //numeric to string

    int y=786;
    cout<<to_string(x)+"2"<<endl;  //append

    //sort

    string sorts="zycsjddnkd";

    sort(sorts.begin(),sorts.end());

    cout<<sorts<<endl;
    return 0;
}

