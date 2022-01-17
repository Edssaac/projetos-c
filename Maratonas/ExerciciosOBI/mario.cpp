#include <bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(),x.end()

int main()
{
	int n, l;
	while(scanf("%d %d", &n, &l) && (n+l))
	{
		vector<int>data(l);
		for(int i=0; i<l; i++)
			scanf("%d", &data[i]);

		int ans=l;
		for(int i=0; i<l; i++)
		{
			int p=data[i]+n-1;
			auto it=upper_bound(ALL(data), p);
			if(it!=data.begin())
			{
				it--;
				int pos=it-data.begin();
				ans=min(ans, max(0, n-(pos-i+1)));
			}
		}

		printf("%d\n", ans);
		break;
	}

	return 0;
}
