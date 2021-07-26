#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n,i,a[1000000];
    
    cin >> n;
    
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    
    for(i=1;i<=n;i++){
        if(i%2==0 && a[i]%2 == 0){
            cout << a[i] << " ";
        }
    }

}
