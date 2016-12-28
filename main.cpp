#include <iostream>
#include <vector>
#include <climits>

class solution {
  public:
    bool increasingTriplet(const std::vector<int> & nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        for (auto n : nums) {
            if (first == INT_MIN || first >= n)
                first = n;
            else if (second == INT_MIN || second >= n)
                second = n;
            else if (third == INT_MIN)
                third = n;
            std::cout << "first = " << first << ", second = " << second << ", third = " << third << std::endl;
            if (third != INT_MIN)
                return true;
        }
        return false;
    }
};

int main() {
    // std::vector<int> nums{1,2,3,4,5};
    std::vector<int> nums{1,4,3,2,4};

    solution soln;
    bool exist = soln.increasingTriplet(nums);
    std::cout << "There " << (exist?"is ":"isn't ")
              << "an increasing triplet!\n";
}
