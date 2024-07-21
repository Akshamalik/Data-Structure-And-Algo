#include<iostream>
using namespace std;

//you are given a number ’n’.Find the number of digits of ‘n’ that evenly divide ‘n’.
int countDigits(int n){
	int num=n;

    int count=0;
    while(n){
        int lastd=n%10;
        if(num%lastd==0){
            count++;
        }
        n=n/10;
    }	
    return count;
}

int count_digits( int n )
{
   int x = n; int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}

int main(){
    int num;
    cin>>num;
    cout<<countDigits(num);
    return 0;
}