#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int count = 0;
        for(auto i: m){
            if(i.second%2!=0){
                count++;
            }
        }
        if(k>=n){
            cout<<"NO"<<endl;
        }
        else if(k>=count-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
