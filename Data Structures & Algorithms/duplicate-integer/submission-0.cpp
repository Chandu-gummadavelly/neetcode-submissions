class Solution {
public:
    // int partition(vector<int>& nums, int p, int r){
    //     int key = nums[p];
    //     int i = p - 1;
    //     int j = r + 1;
    //     while(true){
    //         do{
    //             i++;
    //         } while(nums[i] < key);
    //         do{
    //             j--;
    //         } while(nums[j] > key);
    //         if(i < j){
    //             swap(nums[i],nums[j]);
    //         }
    //         else{
    //             return j;
    //         }
    //     }
    // };

    // void quickSort(vector<int>& nums, int low, int high) {
    //     if (low < high) {
    //         int pi = partition(nums, low, high);
    //         quickSort(nums, low, pi);
    //         quickSort(nums, pi + 1, high);
    //     }
    // };

    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < (int)nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;  
    }
};