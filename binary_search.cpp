#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1; // target not found
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 3, 4, 8, 9};
    int num = 9;
    int idx = sol.search(arr, num);
    cout << idx << endl;
    return 0;
}
