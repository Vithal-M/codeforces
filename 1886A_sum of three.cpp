#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<7 || n == 9){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            int c = n-3;
            if(c%3 == 0){
                cout<<1<<" "<<4<<" "<<n-5<<endl;
            }
            else{
                cout<<1<<" "<<2<<" "<<n-3<<endl;
            }
        }
    }
}
