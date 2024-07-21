#include<iostream>
//corrected
using namespace std;

void areaCircle(int r)
{
    const double pi = 3.14;
    double area = pi * r * r;
    cout << "Area of the circle: " << area << endl;
}

void areaSquare(int s)
{
    int area = s * s;
    cout << "Area of the square: " << area << endl;
}

void areaRectangle(int l, int b)
{
    int area = l * b;
    cout << "Area of the rectangle: " << area << endl;
}

int main()
{
    int r,s,l,b;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    areaCircle(r);
    cout<<"Enter the side of square";
    cin>>s;
    areaSquare(s);
    cout<<"Enter the length and bredth of rectangle";
    cin>>l>>b;
    areaRectangle(l,b);

    return 0;
}
