class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // we will be using hash
        unordered_set<int>numSet(nums.begin(),nums.end());
        int best=0;
        for(int i:numSet){
            //if we didn't found the prev number mean a new series can start from here 
            if(numSet.find(i-1)==numSet.end()){
                int y=i+1;
                while(numSet.find(y)!=numSet.end()){
                    y++;
                }
                best=max(best,y-i); 
                // as values will be consecutivve there difference will give the length
            }
        }
        return best;
    }
};