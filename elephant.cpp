// Coded By Abbas lol
#include <bits/stdc++.h>
using namespace std;
int main(){

    int location=0; // location of elephant.

    cin>>location; // user input.

    cout<<((location/5)+(location%5!=0?+1:+0)); // location divided by 5 (steps) and + if 5 is not enough.

    return 0;
}
