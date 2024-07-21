#include<iostream.h>
using namespace std;

//Get Bit
//1 left shift operator<<i=0100 (n=0101)
//0101 & 0100 jis position ka bit pucha sirf vhi milega
//if n&(1<<i) !=0,then bit is 1
int getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

//Set Bit
//n=0101 suppose i=1
//1<<i=0010
//0101 | 0010
int setBit(int n,int pos)
{
    return (n | (1<<pos));
}

//Clear Bit to put 0
//n=0101  suppose we need to clear bit at i=2
//1<<i=0100
//~0100 = 1011
//0101 & 1011=0001
int clearBit(int n,int pos)
{
    int mask=~(1<<pos);
    return n & mask;
}

//n=0101
//i=1 update to 1
//same as clear than set
int updateBit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n& mask;
    return (n | (value<<pos));
}
int main()
{
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1)<<endl;
    return 0;
}

