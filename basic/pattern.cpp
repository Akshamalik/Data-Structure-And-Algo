#include<iostream>
using namespace std;

void nForest(int n) {
     for(int i=0;i<n;i++){
		 for(int j=0;j<n;j++){
			 cout<<"*"<<" ";
		 }
		 cout<<endl;
	 }
}

void nNumberTriangle(int n) {
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void nForest2(int n) {
     for(int i=0;i<n;i++){
		 for(int j=0;j<=i;j++){
			 cout<<"*"<<" ";
		 }
		 cout<<endl;
	 }
}

void nTriangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

void triangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}

void seeding(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<=n-i-1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void nNumberTriangle2(int n) {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void nStarTriangle(int n) {
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void nStarTriangle2(int n) {
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<(2*n-2*i-1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void symmetry(int n) {
     int spaces=2*n-2;
     for(int i=1;i<=(2*n-1);i++){
         int start=i;
         if(i>n){
             start=2*n-i;
         }
         for(int j=1;j<=start;j++){
             cout<<"*";
         }
         for(int j=1;j<=spaces;j++){
             cout<<" ";
         }
         for(int j=1;j<=start;j++){
             cout<<"*";
         }
         
         cout<<endl;
         if(i<n){
             spaces-=2;
         } else {
             spaces += 2;
         }
     }
}

void getStarPattern(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i==0 || i==(n-1) || j==(n-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void lastp(int n){
        for(int i=0;i<(2*n-1);i++){
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
      
}
void numberCrown(int n) {
    int start=2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //spaces
        for(int j=1;j<=start;j++){
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        start-=2;
    }
}

void nStarDiamond(int n) {
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<(2*n-2*i-1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void nStarTriangle3(int n) {
    for(int i=1;i<=(2*n-1);i++){
        int start=i;
        if(i>n){
            start=(2*n-i);
        }
        for(int j=1;j<=start;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void nBinaryTriangle(int n) {
    int start=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            start=1;
        }
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

void nLetterTriangle(int n) {
    for(int i=0;i<n;i++){
        for(char ch='A';ch<=('A'+i);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void nLetterTriangle2(int n) {
    for(int i=0;i<n;i++){
        for(char j='A';j<=('A'+(n-i-1));j++){
           cout<<j<<" ";
        }
        cout<<endl;
    }
}

void alphaRamp(int n) {
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void alphaHill(int n) {
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //chara
        char ch='A';
        int breakp=(2*i+1)/2;
        for(int j=1;j<=(2*i+1);j++){
            cout<<ch<<" ";
            if(j<=breakp){
                ch++;
            }
            else{
                ch--;
            }
        }
        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;

    }
}

void alphaTriangle(int n) {
    for(int i=0;i<=n;i++){
        char ch='A'+n-1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch-=1;
        }
        cout<<endl;
    }
}

void symmetry(int n) {
    int ins=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=(n-i);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<ins;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=(n-i);j++){
            cout<<"*";
        }
        ins+=2;
        cout<<endl;

    }
    ins=2*n-2;
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=(i);j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<ins;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=(i);j++){
            cout<<"*";
        }
        ins-=2;
        cout<<endl;

    }

}

int main(){
    int n;  //this is for number of test cases
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        pattern13(num);
    }
    return 0;
}