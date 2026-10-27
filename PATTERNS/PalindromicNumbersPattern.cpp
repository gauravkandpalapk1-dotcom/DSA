#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        // spaces
        for(int j=1;j<5-i;j++){
            cout<<" ";
        }
        // decreasing numver
        for(int k=i;k>=1;k--){
            cout<<k;

        }
        // increasing number
        for(int a=2;a<=i;a++){
            cout<<a;
        }
        cout<<endl;

    }
    return 0;
}