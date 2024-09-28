//Written By Abbas Modhaffar + help from Eya Jamue Haque
#include <bits/stdc++.h>
using namespace std;
int main() {

    int n=0; // test case variable.
    
    cin>>n; // user input for n of test cases.

    while(n--){ // loop will iterate each test case.

            int a=0,b=0,c=0,ans=0; // a=x , b=y , c=k , ans is the answer bro.

        cin>>a>>b>>c; // user input.

            int XB=2*(int)ceil(double(a)/c)-1; // X will be the first to start with and the second to end with so we minus 1.

            int YB=2*(int)ceil(double(b)/c); // Y will be the second we start with and the first we end with so no minus 1.
           
        cout<<max(XB, YB)<<endl; // compare numbers and see which is the answer (ans is biggest num).
    }

    return 0;

}