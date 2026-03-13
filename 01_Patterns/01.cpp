#include<bits/stdc++.h>
using namespace std;

int main(){
    //nested loop


    //Sqare
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Downward Triangle
    for(int i=0;i<=4;i++){
        for(int j=i;j<=4;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Upward Triangle
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Equilateral triangle
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Reverse Equilateral
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(5-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Diamond
   for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // lower pyramid
    for(int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(5-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}