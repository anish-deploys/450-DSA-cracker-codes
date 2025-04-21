class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int sum = 0;
        int maxi = arr[0];

        for (size_t i = 0; i < arr.size(); i++) {
            sum += arr[i];
            maxi = max(maxi, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};
