
#include <bits/stdc++.h>
using namespace std;

string stringEncoding(string word) {
    unordered_map<char, int> um;
    string encoded_str ="";
    int ep=0;
    for(auto ch : word) {
       if(um.find(ch) == um.end()) {
           um[ch] = ep++;  
       }     
        encoded_str += to_string(um[ch]);
    }
    return encoded_str;
}

vector<string> findMatchedWords(vector<string> dict, string pattern) {
       vector<string> v;
       int count = 0;
       string hash = stringEncoding(pattern);
       for(auto word : dict) {
           if(word.length() == pattern.length() && stringEncoding(word) == hash) 
                v.push_back(word);
       }
    return v;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		cin>>s[i];
		
		string tt;
		cin>>tt;
		
		
		vector<string> res = findMatchedWords(s,tt);
  sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
		cout<<endl;
		
	}





