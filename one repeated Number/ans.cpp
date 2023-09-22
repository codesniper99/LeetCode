class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        if(!n){
            return -1;
        }
        for(int i=0;i<n;i++){
            int x = abs(nums[i]);
            if(nums[x]<0){
                return x;
            }
            nums[x] = -nums[x];
        }
        return -1;
    }
};