/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> answer;
        for(int i=0; i<nums.size(); i++){
            int first = nums[i];
            int second = target - first;
            if(m.find(second) != m.end()){
                answer.push_back(m[second]);
                answer.push_back(i);
                return answer;
            }
            m[first] = i;
        }
        return answer;
    }
};
