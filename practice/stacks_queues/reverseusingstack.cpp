#include<bits/stdc++.h>
using namespace std;
 
 char *reverseusingstack(char *str, int len){
     stack<char> st;
     for (int i = 0; i < len; i++){
         st.push(str[i]);
     }
     for (int i = 0; i < len; i++){
         str[i] = st.top();
         st.pop();
     }
     return str;
 }
int main(){
    long long int t;
    cin >> t;
    while(t--){
        char str[1000];
        cin >> str;
        long long int len = strlen(str);
       char *ch= reverseusingstack(str, len);
        for (int i = 0; i < len; i++){
            cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}

// ./ reverseusingstack 2 vithalmhetre
//         ertehmlahtiv
//             hello
//                 olleh