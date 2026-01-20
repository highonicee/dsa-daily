/*Subsets (power sets)

Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

thoughtprocess -
for this will need a vector inside a vector and return it as answer
like vector<vector<int>> flower

run a for loop collect all the push -> backtrack -> pop*/

class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> subsets(vector<int>& nums){

    vector<int> curr;
    f(curr,0,nums);
    return res;


    }

    void f(vector<int> &curr, int idx, vector<int> &nums ){
        res.push_back(curr);
        for(int i = idx;i<nums.size();i++){
            curr.push_back(nums[i]);
            f(curr,idx+1,nums);
            curr.pop_back();
        }
    }
};