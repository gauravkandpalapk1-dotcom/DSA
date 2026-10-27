#include<iostream>
using namespace std;
int main(){
    int n=4;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=0;i<4;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        // last star
        for(int k=0;k<i+1;k++){
           cout<<"*"; 
        }
        cout<<endl;
        
    }
    return 0;
}