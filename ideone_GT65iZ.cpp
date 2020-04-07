#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 1000000007 
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void axis (string &str, int size) {
	
	int i = 0, x = 0, y = 0;
	
	while (i < size) {
		
		if (str[i] == 'L' || str[i] == 'R') {
			
			if (str[i] == 'L')
				x -= 1;
			else
				x += 1;
				
			while (i < size && (str[i] == 'L' || str[i] == 'R'))
				i++;
			
		}
		else {
			
			if (str[i] == 'U')
				y += 1;
			else
				y -= 1;
				
			while (i < size && (str[i] == 'U' || str[i] == 'D'))
				i++;
		}
	}
	
	cout << x << " " << y << "\n";
}

int main()
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        
        int size;
        string str;
        
        cin >> size >> str;
        
        axis (str, size);
        
    }
	//code
	return 0;
}