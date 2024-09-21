// Code written and explained By Abbas Modhaffar.
#include <bits/stdc++.h>
using namespace std;
int main(){

    string name,dots[]={"."}; // Two variables 1. for user input , 2.for the dot.

    cin>>name; // user input.

    for(int i = 0; i<name.length(); i++) // loop that iterates based on length of name.
    {
        char x = name[i]; // declare and assign the value of x to name[i].
        x=tolower(x); // make the letter lowercase.
        name[i]=x; // assign the letter back to name[i].
        
    }

    for(int i = 0; i<name.length(); i++) // loop that iterates based on length of name.
    {

    if(name[i]==('a')|name[i]==('o')|name[i]==('e')|name[i]==('y')|name[i]==('i')|name[i]==('u')) // will check if the current letter at name[i] == the condition.
        
        {
            name.erase(name.begin()+i); // erases the letter at name[i].
            i--; // changes the iteration back because something has been removed (size updated).
        }

    }


    for(int w = 0 ; w < (name.length()); w++){  // loop that iterates based on length of name.
        cout<<dots[0]<<name[w]; // will print out ( .name[i]).
    }
    

    return 0;
}