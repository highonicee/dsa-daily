/*COUNT ALL THE SUBSEQUENCES WITH SUM K 

Count all subsequences with sum K

Given an array nums and an integer k.Return the number of non-empty subsequences of nums such that the sum of all elements in the subsequence is equal to k.


Example 1

Input : nums = [4, 9, 2, 5, 1] , k = 10

Output : 2

Explanation : The possible subsets with sum k are [9, 1] , [4, 5, 1].

this problem is about take or not take 
so well'll make vector<vector<int>> res and return res.size();

base case - if(idx == nums.size()){
             if(curr.sum()==k){
             res.push_back(curr)
             return;
             }}
 TC = O(2ⁿ)
 Space Complexity:

Auxiliary (recursion + curr): O(n)

Including output (res): O(n · 2ⁿ)            
             
             */



class Solution{
    public: 
    vector<vector<int>> res;   	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
        vector<int> curr;
        f(curr,nums,0,k,0);
        return res.size();



    }

    void f(vector<int> & curr,vector<int>& nums,int currsum,int k ,int idx){
        if(idx == nums.size()){
            if(currsum == k){
                res.push_back(curr);
                
            }
            return;

        }

        //take
        curr.push_back(nums[idx]);
        f(curr,nums,currsum+nums[idx],k,idx+1);
        curr.pop_back();

        //not take
        f(curr,nums,currsum,k,idx+1);
        

    }
};