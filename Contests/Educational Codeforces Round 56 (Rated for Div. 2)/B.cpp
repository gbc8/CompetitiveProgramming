#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define pii pair<int,int>
#define lli long long int
#define sf(a) scanf("%d", &a)
#define forn(i,n) for(int i = 0; i < n; ++i)
const int mx = 1e6+5;
const int inf = 0x3f3f3f3f;
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		set<int> a;
		forn(i,s.size()) a.insert(s[i]);
		if(a.size() == 1) cout << "-1\n";
		else{
			sort(s.begin(),s.end());
			cout << s << '\n';
		}
	}
	return 0;
}