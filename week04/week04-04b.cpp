/// week 04-04b.cpp Part1:Input Part2: Output
/// UVA 100 The 3n+1
/// Part3: Algorithm(while,if),Part4: now

#include <iostream>
using namespace std;
int main()
{
	int a, b; ///Part 1: input
	while ( cin >> a >> b)
	{
		int ans = 0;
		int now = 1; ///Part4
		while (n!=1) /// Part3
		{
			if (n%2==1)
			{
				n = 3*n+1;
			}
			else
			{
				n = n/2;
			}
			now ++;
		}
		if (now > ans) ans=now; ///Part 4

		printf("%d %d %d\n", a, b, ans);
	}///Part 2 :Output
}
