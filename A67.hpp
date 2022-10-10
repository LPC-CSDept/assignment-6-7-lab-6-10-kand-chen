//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)

void swap(int &a, int &b){
    int temp1 = a;
    a = b;
    b = temp1;
    cout << a << ", " << b << endl;
}

void swap(int &A, int &B, int &C){
    int N[3] = {A, B, C};
    int remainder = N[0];
    int min = N[0];
    int max = N[0];
    for (int i = 0; i < 3; i++){
        if (N[i] < min){
            min = N[i];
        }
        if (N[i] > max){
            max = N[i];
        }
        else
          N[i] = remainder;
    }
    A = min;
    B = remainder;
    C = max;
}

void swap(int &n1, int &n2, int &n3, int &n4){ // n1=10, n2=20, n3=30, n4=40
    int temp2;
    temp2 = n1; // temp2 = 10
    n1 = n2; // n1 = 20
    n2 = n3; // n2 = 30
    n3 = n4; // n3 = 40
    n4 = temp2; // n4 = 10 
    cout << n1 << ", " << n2 << ", " << n3 << ", " << n4;
}