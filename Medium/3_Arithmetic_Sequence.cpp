#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int main()
{
    int t,n,arr[10000000],i,ref,diff,a,b,c,d;
    
    cin >> t;
    
    while(t!=0){
        cin >> n;
        
        for(i=0;i<n;i++){
            cin >> arr[i];   
        }
        
        a = arr[0];
        b = arr[1];
        c = arr[2];
        d = arr[3];
        
        if(b-a == c-b)
            diff = b-a;
        else if(c-b == d-c)
            diff = c-b;
        else
            diff = d - a/3;
        
        ref = arr[0];
        
        for(i=1;i<n;i++){
           
            if(diff + ref == arr[i] )
                ref = ref + diff;
            else{
                cout << arr[i] << endl;
                break;
            }
        }
        
        t--;
    }

}
