// Written by Abbas Modhaffar
#include <bits/stdc++.h>
using namespace std;
int main(){

int tc=0; // Test Cases.

string place; // Location of Rook.

char letters[8]={'a','b','c','d','e','f','g','h'}; // Position Checklist for columns.

cin>>tc;
while(tc--){ // Will repeat till Test Cases = 0.
    cin>>place; // Each Test Case need a specific location.
for(int i=0;i<8;i++){ // Board is 8x8 but rook moves only 8xi and jx8.

    char num=(i+'1'); // num is a char that will hold the number '1' value.

    if(place[1]!=num) // We don't want to print out the current location number.
    cout<<place[0]<<num<<" "; // Will print letter then value of num.

    if(place[0]!=letters[i]) // We print every position with the same number as place[1] without letter place[0].
    {cout<<letters[i]<<place[1]<<" ";} // Prints letters and the same location number as place[1].
}
}







return 0;


}