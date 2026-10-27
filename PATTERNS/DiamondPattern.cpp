#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    // first pyramid
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
          
            
        }
        // stars
        for(int k=0;k<2*i+1;k++){
                cout<<"*";
        }
        cout<<endl;
    }
    // second pyramid
    for(int i=n;i>0;i--){
        // spaces
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        // stars
        for(int k=0;k<2*i-1;k++){
                cout<<"*";
        }
        cout<<endl;
    }

return 0;
}
