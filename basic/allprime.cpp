#include<iostream>
using namespace std;
//corrected
//All prime numbers till n
int main()
{
    int n;  
    cin>>n;
    int num=2;
    while(n>=num) 
    {
        div=2;
        while(div<num) 
        {
            if(num%div==0) 
            {
                num=num+1;
               
            }
            else{
                div=div+1;  
            }
        }
        cout<<num; 
        num=num+1;
    }
}
