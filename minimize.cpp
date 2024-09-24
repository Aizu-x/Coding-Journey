#include  <bits/stdc++.h>
using namespace std;
int main() {
    int a=0,b=0,n=0; // variables.
    cin>>n; // user input.
    for(int i=0;i<n;i++){ // iterates the number of test cases.
        cin>>a>>b; // our 2 numbers.
        cout<<(b-a)<<"\n"; // print out the value of min.
    }
    return 0;
}