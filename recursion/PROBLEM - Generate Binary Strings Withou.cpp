/*PROBLEM - Generate Binary Strings Without Consecutive 1s

Given an integer n, return all binary strings of length n that do not contain consecutive 1s. Return the result in lexicographically increasing order.



A binary string is a string consisting only of characters '0' and '1'.


Example 1

Input: n = 3

Output: ["000", "001", "010", "100", "101"]

Explanation: All strings are of length 3 and do not contain consecutive 1s.

lexicographically increasing order means same as dictionary like a before b and 0 before 1.

my thoughtprocess - 
the things we need to track is 
1. currentString
2. last placed character ie 1 or 0

base case -
if(length (if the currentstring) == n)
then push back stop ie return 

if there is 0 push back 
but if there is 1 check if(last!=1)

of the ver imp concepts is to remember is pop back the backtracking concept.

and just see these
vector<string> ans
currentString.push_back() */





class Solution {
public:
    vector<string> generateBinaryStrings(int n) {

        vector<string> ans;
        string currentString = "";

        F(currentString, -1, n, ans); // used one here has cant use 1 cause previous character might be 1
        return ans;
        
    }

  void  F(string &currentString, int last , int n , vector<string> &ans) {
        

        if (currentString.length == n){
            ans.push_back(currentString);
            return;
        }

            currentString.push_back('0');
            F(currentString, 0 , n , ans);
            currentString.pop_back();   //backtracking 

             if(last != 1){

           currentString.push_back('1');
            F(currentString, 1 , n , ans);
            currentString.pop_back();
             }


         }
        
};
