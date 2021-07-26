#include <iostream>
#include <string>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int i,size;
    string characters;
    
    cin >> characters;
  
    size = characters.length();
    for(i=0;i<(size/2);i++){
        cout << characters[i];
    }
}
