#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int factorial(int n){
    int fact;
    if(n==0)
        fact =1;
    else
     fact = n * factorial(n-1);
    return fact;
}

int main()
{

  int i,n,fact=1;
    
    cin >> n;
    fact = factorial(n);
    cout << fact;

}
