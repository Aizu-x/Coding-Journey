// This code was solved by Sara but i helped a little.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,ans=0;; // Number of blocks.
    string color; // Color of blocks.
    cin>>test>>color; // user input. 
    for (int i=0; i<n; i++){ // iteration of n blocks.
        if (color[i]==color[i+1]){ // if color of block after is the same as next then ++ans to remove it.
            ans++; // update ans.
        }
    }
    cout<<ans; // print out ans.
 
    return 0;
}