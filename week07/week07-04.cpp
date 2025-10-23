/// week07-04.cpp
/// LeetCode 學習計畫 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions+instructions+instructions+instructions;
        cout << instructions;
        int x=0,y=0; ///x座標，y座標
        int d = 0; /// d代表方向 0:北 1:東 2:南 3:西
        /// 右轉 d = (d+1) % 4 取4的餘數
        /// 左轉 d = (d-1+4) %4 = (d+3) % 4 竟然˙可以轉過來，太神奇了！！
        int dx[4] = {0, 1, 0, -1};///前進一格，會走dx[d]
        int dy[4] = {1, 0, -1, 0}; ///這兩行，是地圖2D模擬的精華
        for (char c : instructions)
        {
            if (c == 'G')
            {
                x+=dx[d];
                y+=dy[d];
            }
            else if (c == 'R') ///右轉
            {
                d = (d+1)%4;
            }
            else if (c == 'L') ///左轉
            {
                d = (d+3) %4;
            }
        } ///離開迴圈的時候...竟然會一直走，有時候會回來。
        cout << 'x' << x << 'y' << y << endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
