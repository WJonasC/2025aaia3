/// week 01-3.cpp C++
#include <iostream>  ///
using namespace std; ///

int main()
{
	int n;
	cin >> n; 		 ///
	int ans = 0;
	for(int i=1;i<=n;i++)
	{
		ans += i*i;
	}
	cout << ans;    ///
}
