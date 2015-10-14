/*
  input: 
  numbers={2, 7, 11, 15}, target=9
  output: 
  index1=1, index2=2

*/

#include <iostream>
#include <vector>

class Solution{
public:
    // brute force
    vector<int> twoSum(vector<int>& nums, int target)
    {
        length = nums.size();
        vector<int> vec;
        
        for (int i=0; i<length; i++){
            for (int j=i+1; j< length; j++){
                if (nums[i] + nums[j] == target){
                    vec.push_back[i];
                    vec.push_back[j];
                    return vec;
                    
                }
            }
        }
    }
}

int main()
{
    
}
