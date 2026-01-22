/*COMBINATION SUM - 1 

Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]*/


class Solution {
public:

    vector<vector<int>> res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        f(candidates,target,0,curr,0);
        return res;
    }

    void f(vector<int>& candidates, int target,int currsum, vector<int>& curr, int idx){
        
        
       
        if(currsum ==target){
            res.push_back(curr);
             return;
            
        }
       


        if(currsum>target )
            return;

        for(int i =idx;i<candidates.size();i++){
            if(i>idx && candidates[i] == candidates[i-1]) continue;
            curr.push_back(candidates[i]);
        f(candidates, target, currsum+candidates[i],curr , i+1);
        curr.pop_back();

        }
        

        

    }
};