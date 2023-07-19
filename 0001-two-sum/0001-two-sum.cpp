class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>mp;
     vector<int>v1;
     int i;
     for(i=0;i<nums.size();i++){
         if(mp.find(target-nums[i])==mp.end()){
             mp[nums[i]]=i;
         }
         else{
             v1.push_back(mp[target-nums[i]]);
             v1.push_back(i);
         }

     }
     return v1;
    }
};