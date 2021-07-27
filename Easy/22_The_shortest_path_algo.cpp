#include <iostream>
#include <cmath>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int x1,x2,y1,y2;
    float a,b;
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    a = sqrt(x1*x1 + y1*y1);
    b = sqrt(x2*x2 + y2*y2);
    
    if(a < b)
        cout << "A";
    else
        cout << "B";
}
