#include <iostream>
#include <vector>
#include <string>

using namespace std;

string utilCommonPrefixUtil(string& s1,string& s2){
    string res;
    int n1 = s1.size();
    int n2 = s2.size();
    int i;

    for(i = 0; i < n1 && i < n2; i++){
        if(s1[i] != s2[i]) break;
        res.push_back(s1[i]);
    }
    return res;
}

string FindCommonprefixUtil(vector <string>& solving, int left, int right){
    
    if(left == right) return solving[left];

    if(left < right){
        int mid = left + (right - left) / 2;
        string p1 = FindCommonprefixUtil(solving,left,mid);
        string p2 = FindCommonprefixUtil(solving,mid + 1,right);
        return utilCommonPrefixUtil(p1,p2);
        
    }
    return "";
}


class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        return FindCommonprefixUtil(strs, 0 ,strs.size() -1);
    }
};