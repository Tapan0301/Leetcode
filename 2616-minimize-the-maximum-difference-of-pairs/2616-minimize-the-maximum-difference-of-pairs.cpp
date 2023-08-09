class Solution {
public:
    bool findelements(int mid,vector<int>& nums,int p){
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]<=mid){
                ans++;
                i++;
            }
        }
        return ans>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int high=nums[n-1];
        int low=0;
        int ret;
        while(low<=high){
            int mid=(low+high)/2;
            if(findelements(mid,nums,p)){
                ret=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ret;
    }
};