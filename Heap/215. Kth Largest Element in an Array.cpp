class Solution {
public:
    // void heapify(vector<int>& nums, int n, int i){
    //     int large = i;
    //     int left = 2*i;
    //     int right = 2*i+1;
    //     if(left< n && nums[large]<nums[left]){
    //         large = left;
    //     }

    //     if(right < n && nums[large]<nums[right]){
    //         large = right;
    //     }

    //     if(large != i){
    //         swap(nums[large],nums[i]);
    //         heapify(nums,n,large);
    //     }
    // }
    int findKthLargest(vector<int>& nums, int k) {
        // int n = nums.size();
        // for(int i=n/2; i>=1; i--){
        //     heapify(nums,n,i);
        // }
        // for(int i=n; i>1; i--){
        //     swap(nums[1],nums[i]);
        //     heapify(nums,n,1);
        // }
        // return nums[n-k+1];

        priority_queue<int, vector<int>, greater<int>>minHeap;

        for(int i:nums){
            minHeap.push(i);

            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};
