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
