/// week06-03a.cpp
/// LeetCode �ǲ߭p�e �Ĥ@�D ���� 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> a;
        for (string op : operations) /// C++ ���i���j��
        {
            /// cout << op < "\n" ; /// �ոլݡA�|�L�X����F��
            if (op[0] == "+") ///�⥽��Ƭۥ[�A�A��^�h
            {
            }
            else if (op[0]=='D') /// �ƻs�̫�1���A�A��^�h
            {
            }
            else if (op[0]=='C') /// �R���̫�1��
            {}
            else /// ��stoi(op) ��ơA��^�h
            {}
        }
        /// �̫�A��for�j��A��}�C a ���ȡA�����[�_��
        int ans = 0;
        for (int now : a) ///C++�i���j��A�]�i�H��for (int i=0; i<a.size(); i++){ int now=a[i]}
        {
            ans += now;
        }
        return 0; ///���H�K return 0 ���@�U�A��C
    }
};
