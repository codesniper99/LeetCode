class Solution {
public:
    void nextPermutation(vector<int>& nums) {
  	int n = nums.size();
	vector<int> desc = nums;
	sort(desc.begin(), desc.end(), greater<int>());
	int f = 0;
	for(int i=0;i<n;i++){
		if(desc[i] != nums[i]){
			f=1;
		}
	}
	if(!f){
		sort(nums.begin(),nums.end());	
		return;
	}      

	for(int i=n-1;i>=1;i--){
		if(nums[i-1]<nums[i]){
			int j = n-1;
			while(j>=i && nums[j]<=nums[i-1]){
				j--;
			}
			nums[i-1]+=nums[j];
			nums[j] = nums[i-1]-nums[j];
			nums[i-1] -=nums[j];
			reverse(nums.begin()+i, nums.begin()+n);
			break;
			}
		}
    }

};
