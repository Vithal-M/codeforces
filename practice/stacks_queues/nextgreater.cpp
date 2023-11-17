#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreaterelement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n, -1); // Initialize the result vector with -1, assuming no greater element initially
    stack<int> s;              // Stack to keep track of indices

    for (int i = 0; i < n; ++i)
    {
        while (!s.empty() && nums[i] > nums[s.top()])
        {
            result[s.top()] = nums[i]; // Set the next greater element for the top of the stack
            s.pop();                   // Pop the index from the stack
        }
        s.push(i); // Push the current index onto the stack
    }

    return result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i <n ; i++){
            cin >> nums[i];
        }
        vector<int> result = nextgreaterelement(nums);
        cout << "next greater elements: ";
        for(int num:result){
            cout << (num == -1 ? -1 : num) << " ";
        }
        cout << endl;
    }
    return 0;
}



