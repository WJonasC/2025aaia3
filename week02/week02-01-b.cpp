///week02-01.cpp Part2
/// SOIT106_ADVANCE_001 Using C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=n;///backup
	int ans =0;
	while(n>0) ///��֪k
	{
		ans = ans*10+n%10;
		n = n/10;
	}
	printf("%d+%d=%d\n",a,ans,a+ans);
	///printf("%d",ans);
}
