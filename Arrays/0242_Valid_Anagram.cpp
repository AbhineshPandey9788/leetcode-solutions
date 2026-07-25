#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "car";
    string t = "rat";

    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for(char ch : s) {
        freq1[ch]++;
    }

    for(char ch : t) {
        freq2[ch]++;
    }

    if(freq1 == freq2) {
        cout << "Valid Anagram";
    }
    else {
        cout << "Not an Anagram";
    }

    return 0;
}