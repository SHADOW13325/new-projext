#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll power (int n) {
	
	ll ans = 1, temp = 2;
	
	while (n > 0) {
		
		if (n & 1)
			ans = (ans * temp) % Mod;
		
		temp = (temp * temp) % Mod;
		
		n >>= 1;
	}
	
	return ans;
}

pair<string,bool> DivideAString(string num, int divisor) {
    
    int i = 0, temp = 0;
    
    string ans = "";
    
    while (i < num.size() && temp < divisor) {
        
        temp = temp * 10 + (num[i] - '0');
        i++;
    }
    bool flag = false;
    ans += (temp / divisor) + '0';
    temp = temp % divisor;
    if (temp == 1)
        flag = true;
    while (i < num.size()) {
        
        temp = temp * 10 + (num[i] - '0');
        ans += (temp / divisor) + '0';
        temp = temp % divisor;
        if (temp == 1)
            flag = true;
        i++;
    }
    
    return {ans, flag};
}

int Division (string arr[], int size) {
	ll ans = 1;
	int set_bits = 0; 
	
	for (int i = 0; i < size - 1; i++) {
		
		string temp = arr[i];
		int set_bits = 0;
		
		while (temp != "0") {
			pair<string, bool> iPair =  DivideAString (temp, 2);
	
			temp = iPair.first;
			set_bits += (iPair.second ? 1 : 0);
		}
		ans = (ans * power(set_bits)) % Mod;
	}
	
	return ans;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        
        int size;
        cin >> size;
        
        string arr[size];
        
        for (int i = 0; i < size; i++)
        	cin >> arr[i];
        
        cout << Division(arr, size) << "\n";
    }
	//code
	return 0;
}