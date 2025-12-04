/// week 13-02a.cpp
/// LeetCode 學習計畫 Linked List 第 1 題
/// 21. Merge Two Sorted Lists 左邊list 1 右邊 list2 合起來

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        /// 練習寫寫看【資料結構】怎麼寫程式
        ListNode * ans = new ListNode(999); /// 老師故意亂寫 999
        ListNode* ans2 = new ListNode(888); /// 老師故意亂寫888
        ans -> next = ans2; ///把他們接起來
        /// 先寫4行，熟悉一下資料結構【怎麼new新的節點、怎麼接起來】
        return ans;
    }
};
