#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin >> n;
    cout<<n<<" ";
    while(1){
        if(n == 1){
        break;
    }
        if(n%2 == 0){
        n = n/2;
        cout << n << " ";
    }
    else{
        n = n*3 + 1;
        cout << n <<" ";
    }
    
    }
    return 0;
}