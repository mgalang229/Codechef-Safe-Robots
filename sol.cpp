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
  	bool safe = true;
  	// check if alice's robot will collide with bob's robot
  	// break the loop if one of them is out of range
  	while (alice_index < n - 1 && bob_index > 0) {
  		if (alice_index == bob_index) {
        safe = false;
        break;
  		}
  		alice_index += sa;
  		bob_index -= sb;
  	}
  	cout << (safe ? "safe" : "unsafe") << '\n';
  }
  return 0;
}      