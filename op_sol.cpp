#include <bits/stdc++.h>

using namespace std;
                             
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	string s;
  	int sa, sb;
  	cin >> s >> sa >> sb;
  	int alice_index = -1;
  	int bob_index = -1;
  	int n = (int) s.size();
  	// get the index of alice's and bob's robot
  	for (int i = 0; i < n; i++) {
  		if (s[i] == 'A') {
  			alice_index = i;
  		} else if (s[i] == 'B') {
  			bob_index = i;
  		}
  	}
  	// displacement divided by the total speed
  	if((bob_index - alice_index) % (sa + sb) == 0) {
  		cout << "unsafe";
  	} else {
      cout << "safe";
  	}
  	cout << '\n';
  }
  return 0;
}      
