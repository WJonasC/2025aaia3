/// week02-03.cpp  �ϥ� C++ 2011�~�s�����r��: stoi() �\��
///�bCodeBlocks�̡A�����}��Setting-Compiler ... ��c++11���Ĥ�
/// SOIT106 ADVANCE_001_Using C++
#include <iostream> ///cin cout Ū�J��ơB�L�X���
#include <string> /// string �r�ꪺ�\��
using namespace std; ///�ϥΡi�R�W�Ŷ��j �зǪ� std
int main()
{
	string a; /// �ŧi�r�� a
	cin >> a; /// Ū�J�r�� a
	string ans; /// �ŧi�r��ans�񵪮ץΪ�
	int N = a.length(); ///�r��a������
	for (int i=N-1; i>=0; i--) ///�˹L�Ӫ��j��
	{
		ans += a[i];///�b�j�餤�A��a[i]���ans���᭱
	}
	cout << a << '+' << stoi(ans) << '='<< stoi(a)+stoi(ans)<<endl;
} /// stoi() is "string to int" ��i�r��j�ܦ��i��ơj
