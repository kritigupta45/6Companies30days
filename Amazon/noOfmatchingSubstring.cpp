// class Solution {
// public:
//     // function to check if a given word is a subsequence of string s
//     bool isSubsequence(string s, string word) {
//     // Edge case: if the length of s is less than the length of word, return false
//     if(s.length() < word.length()) return false;
//     int sIndex = 0, wIndex = 0; // sIndex and wIndex are pointers for s and word respectively
    
//     // iterate through both s and word
//     while(sIndex < s.length() && wIndex < word.length()) {
//         // if s[sIndex] is equal to word[wIndex], increment both pointers
//         if(s[sIndex] == word[wIndex]) {
//             sIndex++;
//             wIndex++;
//         } else {
//             sIndex++;
//         }
//     }
    
//     // if wIndex reaches the end of word, it means it is a subsequence of s
//     return (wIndex == word.length());
// }

// int numMatchingSubseq(string s, vector<string>& words) {
//     int matchCount = 0; // variable to keep track of the number of matching subsequences
    
//     unordered_map<string, int> cache; // hash map to store previously checked words and their result
    
//     // iterate through all words in the given vector
//     for(auto &word : words) {
//         // if the word has already been checked, add the result to matchCount
//         if(cache.count(word)) {
//             matchCount += cache[word];
//         } else {
//             // if the word has not been checked yet, check it and add the result to matchCount
//             matchCount += cache[word] = isSubsequence(s, word);
//         }
//     }
//     return matchCount;
//     }
// };