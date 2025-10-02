/// week04-01.cpp
/// LeetCode 珼驹肈 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; ///秨﹍碞耻硂或瞺
        while (numBottles >= numExchange ) ///狦瞺计 >= 传秖碞传
        {
            numBottles = numBottles - numExchange + 1; ///传1都
            ans ++; ///耻瞺
            numExchange ++; ///传夹非瞺
        }
        return ans;
    }
};
