/// week02-02a.cpp Part 1
/// SOIT106 ADVANCE_001_Using C++
#include <iostream> //cin cout
#include <string> // string
using namespace std;
int main()
{
	string a;
	string ans;
	cin >> a;
	int N = a.length();
	for (int i=N-1; i>=0; i--)
	{
		ans += a[i];
	}
	cout << ans;
}
