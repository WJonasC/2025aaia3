/// week 03-02a.cpp �G�X�@�n�g�⦸(�g���A�ܶ}�ߡA��²��A�M��N...)
/// LeetCode 1822. Sign of the Product of an Array
/// ��}�C���_�ӡA�ݬO���ơB�t�ơA�٬O 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; ///�]��0���H����ơA���|�ܦ�0�A�u��1�̨ġA���ƻ�K����
        for (int i=0; i<nums.size(); i++) ///�ݦ��X�ӼơA�j��]�X��
        {
            ans *= nums[i]; ///�C����num[i]���ians��
        } /// �Ʀr�V���V�j�A1000�ӼƦr�A����@�b�A�N�z���F�A�ҥH�{���X���F�A����
        if (ans>0) return 1;
        if (ans<0) return -1;
        return 0;
    }
};
