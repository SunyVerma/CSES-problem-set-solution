#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> input;
    int n;
    cin >> n;
    for(int i = 0; i<n-1; i++){
        int x;
        cin >> x;
        input.push_back(x);
    }
    vector<int> zero(n,0);
    for(int i = 0; i<n-1; i++){
        zero[input[i]-1] = 1;
    }
    int x;
    for(int i = 0; i<n; i++){
        if(zero[i] != 1){
            x=i+1;
            break;
        }
    }
    cout<<x;
}