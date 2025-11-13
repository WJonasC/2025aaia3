/// week10-01b.cpp 寫兩次，第一次用for迴圈，第2次用數學
/// LeetCode 學習計畫 第一題 1523. Count Odd Numbers in an Interval Range
/// 從 low ... high 裡面有幾個odd奇數？

class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2; ///用數學，奇數佔一半
        if (high%2==1 || low%2==1) ans++; ///頭尾有奇數，要++
        return ans;
    }
};
