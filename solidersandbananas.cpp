#include <iostream>
using namespace std;
int main(){

    int cost=0,money=0,want=0,need=0; //variables.

    cin >> cost >> money >> want ; // user input.

    for(int i =1 ;i<=want;i++){ // will iterate as prices get increased with quantity.
        need+=cost*i;
    }

    if((need<=money)){cout<<0;return 0;} // will see if he has enough money to buy.
    
    else{cout<<need-money;} // will see how much he will need to borrow.
    
    return 0;
}