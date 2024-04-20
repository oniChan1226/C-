#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> two_sum(vector<int> &nums, int target)
    {
        vector<int> result;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            for(int j = i + 1; j < size; j++) {
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return {}; // empty vector


        // for (auto i = nums.begin(); i != nums.end(); ++i)
        // {
        //     for (auto j = i + 1; j != nums.end(); ++j)
        //     {
        //         if (*i + *j == target)
        //         {
        //             result.push_back(distance(nums.begin(), i));
        //             result.push_back(*i);
        //             result.push_back(distance(nums.begin(), j));
        //             result.push_back(*j);
        //             return result;
        //         }
        //     }
        // }
        // return {}; // Return empty vector if no solution is found
    }
};

int main()
{
    vector<int> arr = {24, 5, 32, 2, 11, 15, 7};
    int target = 9;
    Solution s1;
    vector<int> result = s1.two_sum(arr, target);
    for (int element : result)
    {
        cout << element << " ";
    }
    cout << endl;

    // int a[10] = {2,3,4,5,6,7,87};
    // for(int n: a) {
    //     cout << n << " ";
    // }

    return 0;
}
