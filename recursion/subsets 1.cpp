/*Subsets I

Given an array nums of n integers. Return array of sum of all subsets of the array nums.



Output can be returned in any order.


Example 1

Input : nums = [2, 3]

Output : [0, 2, 3, 5]

Explanation :

When no elements is taken then Sum = 0.

When only 2 is taken then Sum = 2.

When only 3 is taken then Sum = 3.

When element 2 and 3 are taken then sum = 2+3 = 5.


thoughprocess - when the subset is made from nums but then we have to create the array of sum 
so we'll return the sum
so we have to use pick and not pick thing and just calculate the sum */

class Solution {
  public:
  vector<vector<int>> res;
    vector<int> subsetSums(vector<int>& nums) {
        vector<int> curr;
        f(curr, 0,nums);
        return res;

    }

    void f(int currsum,int idx , vector<int>& nums ){
      
     if(idx == nums.size()){
      res.push_back(currsum);
      return res;
     }

     //pick
     f(currsum+nums[idx],idx +1, nums);

     //noy pick
     f(currsum,idx+1,nums);





    }
};