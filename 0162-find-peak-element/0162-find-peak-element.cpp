class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() ;
        if ( n == 1 ){
            return 0 ;
        }
        int left = 0 , right = n-1 ;
        while(left < right ){
            int mid = left + ( right - left )/2;
            if(nums[mid] > nums[mid+1]){
                right = mid ;
            }else{
                left = mid + 1 ;
            }
        }
        return left ;
        
    }
};