#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string S) {
    stack<char>stack;
    stack.push(S[0]);
    string result;
    int length = S.length();
    if(S.length()==0)
        return " ";
    for(int i = 1;i<length;i++){
        if(stack.empty())
            stack.push(S[i]);
        else {

            if(S[i]==stack.top())
            {
                stack.pop();
            }
            else
                stack.push(S[i]);
        }
    }
    while(!stack.empty()){
        result+=stack.top();
        stack.pop();
    }
    reverse(result.begin(),result.end());
    return result;

}
int main() {
    string unique = removeDuplicates("bannananannnannanananan");
    cout<<unique;
    return 0;
}
