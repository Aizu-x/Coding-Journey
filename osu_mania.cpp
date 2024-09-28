#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int row;
        cin>>row;
        int x[row]={0};
        for(int k=0;k<row;k++){
            string rowline;
            cin>>rowline;
            if(rowline=="...#"){x[k]=4;}
            if(rowline=="..#."){x[k]=3;}
            if(rowline==".#.."){x[k]=2;}
            if(rowline=="#..."){x[k]=1;}}
        for(int j=(row-1);j>(-1);j--){
            cout<<x[j]<<" "; 
        }
    }

    return 0;
}
