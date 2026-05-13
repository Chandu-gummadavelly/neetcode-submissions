class Solution {
public:
    int search(vector<int>& nums, int target) {
        int front = 0;
        int back = nums.size() - 1;
        while(front <= back){
            int mid = (front + back)/2;
            if(nums[mid]> target){
                back = mid-1;
            }
            else if(nums[mid]<target){
                front = mid+1;
            }
            else if (nums[mid] == target){
                return mid;
            }
        }
        return -1;
    }
};
