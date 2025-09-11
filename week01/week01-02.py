## week 01-2.py �ϥ�Python ������1�ϥ�for �j��
## LeetCode 28. Find the Index of the First Occurrence in a String
## �b hatstack (���_����) ���� needle �w (�j�����w)

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)   ##�r�ꪺ����
        N = len(needle)     ##�r�ꪺ����
        for i in range(H-N+1): ## �n�O�o+1
            ## ���� slicing
            if haystack[ i : i+N ] == needle: ## ��쪺��
                return i ## ���m����
        return -1 ## �S�����

## week 01-2b.py �ϥ�Python ������2�ϥ� .find()�禡
## LeetCode 28. Find the Index of the First Occurrence in a String
## �b hatstack (���_����) ���� needle �w (�j�����w)

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
