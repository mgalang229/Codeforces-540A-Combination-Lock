#include <bits/stdc++.h>
 
using namespace std;
		
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, ans=0;
	char s[1000], s2[1000];
	cin >> n >> s >> s2;
	for(int i=0; i<n; ++i){
		ans+=min(abs(s[i]-s2[i]), 10-abs(s[i]-s2[i]));
	}
	cout << ans << "\n";
	return 0;
}
