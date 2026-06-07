/*Approach:
Use a stack to process characters one by one. 
If the current character and the stack's top character are the same letter with opposite cases (ASCII difference = 32), remove the top character.
Otherwise, push the current character. Finally, construct the result from the stack.

Time Complexity: O(n)
Space Complexity: O(n) */
class Solution {
public:
    string makeGood(string s) {
       stack<char>st;
       for(char ch:s){
        if(!st.empty() && abs(st.top()-ch)==32){
            st.pop();}
        else
        st.push(ch);
       } 
    string ans;
    while(!st.empty()){
    ans+=st.top();
    st.pop();  
    }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
