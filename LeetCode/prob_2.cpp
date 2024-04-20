#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(vector<int> x) {
        int value = x.at(0);
        int remainder = 0;
        while(!(value <= 0)) {
            remainder = remainder * 10 + value % 10;
            value /= 10;
        }
        cout << remainder << endl;
        if(remainder == x.at(0)) {
            return true;
        }
        return false;

    }
};

int main() {
    Solution s1;
    vector<int> values;
    values.push_back(-121);
    cout << s1.isPalindrome(values) << endl;

    return 0;
}