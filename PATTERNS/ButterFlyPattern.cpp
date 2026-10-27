#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter thhe number of rows ";
    cin>>n;
    // first half
    for(int i=0;i<n;i++){
        // left star
        for(int j=0;j<i+1;j++){
              cout<<"*";

        }
        for(int k=0;k<(n-i)*2-2;k++){
            cout<<" ";
        }
        // right star
        for(int a=0;a<i+1;a++){
            cout<<"*";
        }
        cout<<endl;
      

    }
    // second half
    for(int i=n;i>0;i--){
        // left star
        for(int j=0;j<i;j++){
              cout<<"*";

        }
        for(int k=0;k<(n-i)*2;k++){
            cout<<" ";
        }
        // right star
        for(int a=0;a<i;a++){
            cout<<"*";
        }
        cout<<endl;
      

    }
    return 0;
    
}