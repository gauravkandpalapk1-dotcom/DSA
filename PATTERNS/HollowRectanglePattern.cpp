#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        // first star
        cout<<"*";
        // middle ones
        for(int j=0;j<3;j++){
            if(i==0||i==3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        // last star
        cout<<"*";
        cout<<endl;
    }
    return 0;
}