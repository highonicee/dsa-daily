/*GENERATE PARENTHESES
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]


thoughtprocess - 
A valid string 
1. not close more than it opens
2. ends when everything is closed 

and total length of string is gonna be 2n 
so base case
if(curr.length == 2*n){
    tab you curr.pushback()
    return
}*/

class Solution {
public:
    vector<string> generateParenthesis(int n){
        vector<string> ans;
        string curr ="";
        f(curr,0,0,n,ans);
        return ans;
    }


        void f(string &curr, int open,int close,int n, vector<string> &ans ){
            if(curr.length()==2*n){
                ans.push_back(curr);
                return;
            }

            if(open<n){
                curr.push_back('(');
                f(curr,open+1,close,n,ans);
                curr.pop_back();
            }

            if(close<open){
                curr.push_back(')');
                f(curr, open,close+1,n,ans);
                curr.pop_back();
            }
        }

    
};