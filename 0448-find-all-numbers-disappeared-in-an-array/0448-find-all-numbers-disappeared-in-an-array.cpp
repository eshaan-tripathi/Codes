class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(m[i + 1] == 0) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};
