/// week04-03.cpp
/// LeetCode �ǲ߭p�e��7�D 66. Plus One
/// 1 2 3
///     4 �̥k��}�l�A+1����
/// 4 3 2 1
///       2 �̥k��}�l�A+1 ����
/// 9 9 9
///     0 ���i��A����H���i�H return �~��
///    5 �̥k�� +1 ����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); /// �W�g�йL �}�C���j�p
        for (int i=N-1; i >=0; i--) ///�˹L�Ӫ��j��
        {
            if (digits[i]==9) ///�n�i��A�·ФF(���൲��)
            {
                digits[i] = 0; ///�]�� 0 �A�~�򰵡A������
            }
            else ///���ζi�쪺�ܡA�W�n���I����++�N�����F�I
            {
                digits[i]++; ///²��+1�աI
                return digits; ///��������}�C�i���סj return
            }
        }
        digits.insert(digits.begin(), 1); ///�̥��� �n���J1
        return digits; /// �����o
    }
};
