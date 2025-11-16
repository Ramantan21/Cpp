// longest common prefix
/*
The idea behind this problem is to sort the array of strings and find the common prefix of the first and last string of the sorted array.
Sorting is used in this approach because it makes it easier to find the longest common prefix. When we sort the strings, the first and last strings
in the sorted list will be the most different from each other in terms of their characters.So the longest common prefix for all the strings must be a prefix
of both the first and the last strings in the sorted list.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MergeSort{

public:
    void merge(vector<string>& stringsarr, int left, int mid, int right){
        int i,j,k;
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector <string> leftArr(n1);
        vector <string> rightArr(n2);
        for(i = 0; i < n1; i++) leftArr[i] = stringsarr[left + i];
        for(j = 0; j < n2; j++) rightArr[j] = stringsarr[mid + 1 +j];

        i = 0;
        j = 0; 
        k = left;

        while(i < n1 && j < n2){
            if(leftArr[i] <= rightArr[j]){
                stringsarr[k] = leftArr[i];
                i++;
            }else{
                stringsarr[k] = rightArr[j];
                j++;
            }
            k++;
        }
        while( i < n1){
            stringsarr[k] = leftArr[i];
            i++;
            k++;
        }
        while( j < n2){
            stringsarr[k] = rightArr[j];
            j++;
            k++;
        }
            
    }
    void merge_sort(vector<string>& stringsarr, int left, int right){
        if(left < right){
            int mid = left +(right - left) / 2;
            merge_sort(stringsarr,left,mid);
            merge_sort(stringsarr,mid + 1,right);
            merge(stringsarr,left,mid,right);
        }
    }

};

class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        MergeSort solution;
        solution.merge_sort(strs,0,static_cast<int> (strs.size()) - 1);
        const string &first = strs.front();
        const string &last = strs.back();

        int minLenght = min(first.size(),last.size());

        int i = 0;
        while( i < minLenght && first[i] == last[i]) i++;

        return first.substr(0,i);
        
    }
};

// int main(){
//     vector <string> testing;
//     testing.push_back("");
//     testing.push_back("");
//     testing.push_back("");
//     testing.push_back("");
//     MergeSort ms;
//     ms.merge_sort(testing,0, static_cast<int>(testing.size()) - 1);
//     for(const auto &s : testing) cout << s << endl;

//     return 0;
// }