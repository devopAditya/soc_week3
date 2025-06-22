class Solution {
    public:
        int search(vector<int>& nums, int target) {
            
           
            int endpt=nums.size()-1;
            int stpt=0;
            while(stpt<=endpt)
        {
    
            int mid = stpt + (endpt - stpt) / 2;
                if(target==nums[mid]){ return mid;}
    
            if(nums[stpt]<=nums[mid]){
                if(nums[stpt]<=target && target<=nums[mid]){ //lest sort
                    endpt=mid-1;}
                else{ stpt=mid+1;}
            }
            else
            {
    
    
                if(nums[mid]<=target && target<=nums[endpt]){
                    stpt=mid+1;
                }
                else {endpt=mid-1;}
            }
        } 
            return -1;
    
        }
    };