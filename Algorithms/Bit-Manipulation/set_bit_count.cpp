#include<iostream>
using namespace std;

// First Method
// TC: O(log n) 
//
// For any number n, there will be atmax log n bits to traverse
// eg- For 15 (001111) => (log  15) + 1 to traverse => 4 bits
// eg- For 8 (1000) => (log 8) + 1 denotes position beyond which there will be no set bits.
int countBits_1(int n) {
	int ans=0;
	while(n>0) {
		ans += (n&1);
		n=n>>1;
	}
	return ans;
}

// Second Method	
// TC: O(No. of set bits)
int countBitsFast(int n) {
	int ans=0;
	while(n>0) {
		n = n & (n-1);
		ans++;
	}
	return ans;
}

// Third Method
// Inbuilt Fn.
void countBits_2(int n) {
	cout << __builtin_popcount(n) << endl;
}
// Driver
int main() {
	 int n;
	 cin >> n;
	 cout << countBits_1(n) << endl;
	 cout << countBitsFast(n) << endl;
	 countBits_2(n);
	 return 0;
}
