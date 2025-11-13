/// week10-01a.cpp 寫兩次，第一次用for迴圈，第2次用數學
/// LeetCode 學習計畫 第一題 1523. Count Odd Numbers in an Interval Range
/// 從 low ... high 裡面有幾個odd奇數？


class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for (int i=low; i <= high; i++)
        {
            if (i%2==1) ans++; ///奇數
        }
        return ans;
    }
};
