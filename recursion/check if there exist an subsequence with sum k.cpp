/*CHECK IF THERE EXIST A SUBSEQUENCE WITH SUM K 

Check if there exists a subsequence with sum K

Given an array nums and an integer k. Return true if there exist subsequences such that the sum of all elements in subsequences is equal to k else false.


Example 1

Input : nums = [1, 2, 3, 4, 5] , k = 8

Output : Yes

Explanation : The subsequences like [1, 2, 5] , [1, 3, 4] , [3, 5] sum up to 8.


this problem a lot more similar with the count the number of subsequence with sum k problem same 
take or
not take thing but here we dont need curr vector 
just i have to return a boolean value 
base case -
if(idx == nums.size()){
    return currsum == k;
}

** TAKE works OR NOT-TAKE works → return true
Else → return false



TC- O(2^n) (classic subsequence)
SC-O(n) (recursion stack) */

class Solution{
    public:
    vector<vector<int>> res;
    bool checkSubsequenceSum(vector<int>& nums, int k) {

        
    }

    void f( int currsum , vector<int>& nums, int idx , int k){
        if(idx = nums.size()){
        return (currsum == k)
        }
            
        
       
    

    //take

    
   if( f(currsum+nums[idx],nums,idx+1,k))
    return true;

    //not take

    if(f(currsum,nums,idx+1,k))

    return true;


    return false; // if either taking nor skipping works then false
    }



};
