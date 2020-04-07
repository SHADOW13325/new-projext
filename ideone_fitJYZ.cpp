#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
	ll n,m;
	cin >> n >> m;
	
	ll arr[n];
	
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
		arr[i] = arr[i];
	}
	
	ll ans = 1;
	
	for (ll i = 0; i < n - 1; i++) {
		for (ll j = i + 1; j < n; j++) {
			
			ans = (ans * abs(arr[i] - arr[j]) % m ) % m;
			
			if (ans == 0)
				break;
		}
		
		if (ans == 0)
			break;
	}
	
	cout << ans << "\n";
	
	// your code goes here
	return 0;
}