#include <bits/stdc++.h>
#include <string.h>
#include <vector>
#include <stack>
#include <array>
#include <algorithm>


using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
        int mi = n/2+(n&1);
        cout<<mi<<" "<<n<<endl;
	}
	return 0;
}
