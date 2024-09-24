#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n=0; // test case variable.
    cin>>n; // user input.
    for(int i=0;i<n;i++){
        int num; // the number will will input.
        cin>>num; // user input for number.
        cout<<(num/10)+(num%10)<<endl; // num/10 will print first position of int , num%10 is the second position.
    }
    
    return 0;
}