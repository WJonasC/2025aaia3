/// week02-05.cpp LeetCode �ǲ߭p�e��2�D
/// LeetCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        /// �����B�έp�@�U 26 �Ӧr���A�X�{�X��
        int A[256] = {}; ///�}�C�ŧi�AASCII�G0-255 �w�]�� 0
        for (int i=0;i<s.length();i++)
        {
            char c = s[i]; ///����i�Ӧr��
            A[c]++; ///�����A��i�������r������l��
        }
        for (int i=0;i<t.length();i++)
        {
            char c = t[i]; ///���i�Ӧr��
            A[c]--; ///�q��l�̡A���X�r��
            if (A[c] < 0) return c; ///�r�������ΡA�N�O���I�I�I�I�ʥ��I�I
        }
        return 0;
    }
};
