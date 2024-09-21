#include <bits/stdc++.h>
using namespace std;
int main() {
    
    // Yes this code is written by me "Abbas" i didnt cheat i actually understand and explained this.

    int letters[26]={0}; // 26 Alphabetical letters.
    int distinct=0; // Number of distinct letters.

    string username; // User Input.
    cin>>username;

    int i = 0; // loop start.

    while(i < username.length()){ // Loop from 0 to username size basically.

        char letter = username[i]; // holds letter at place i from the user input.
        if(!letters[letter-'a']) // goes to letters[n] and return either 0 or 1 based on logic.
            {
                distinct++; // increments the distinct variable.
                letters[letter-'a']=1; // will make the index into a 1 so we dont repeat the letter.

            }
        i++; // updates the iterator variable.
    }
   
    if(distinct%2==0){cout<<"CHAT WITH HER!";} // if number is even it will cout.
    else{cout<<"IGNORE HIM!";} // else (if it's odd) it will cout.
    
    return 0;
}