/// week 03-04.cpp
/// LeetCode �D���D(�Ȫ����D) 120. Triangle ���̤W�����U�����̤p��
class Solution { ///�ϥΡi�ʺA�W���j�C�C��s�}�C�N�n�F
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        /// triangle[i][j] ��i�h����j�ӼơC
        int N = triangle.size(); ///�`�@���X�h
        /// �q�U���W�d�A�̤U������N-1�h�A�S���D�A�N�O�������̤p�� �ҥHN-2���W��s
        for (int i=N-2; i>=0; i--)
        { ///�˹L�Ӫ��j��A�qN-2���W
            for (int j=0;j<=i; j++) ///�q����k�A��i�h��0....i�ӼơA���n��s
            {
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                ///�C�ӤH�A�n�ݥ��U��2�ӿ�ܡA��̤p�����@��
            }
        }
        return triangle[0][0];
    }
};
