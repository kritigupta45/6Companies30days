// class Solution {
// public:
//     // DP Approach - Similar to 1143. Longest Common Subsequence
//     int findLength(vector<int>& nums1, vector<int>& nums2) {
//         int n = nums1.size(), m = nums2.size(), ans = 0;
//         // dp[i][j] means the length of repeated subarray of nums1[:i] and nums2[:j]
//         // initially the first row (i = 0) and the first col (j = 0) would be zero
//         // dp[i][0] = 0 for all i and dp[0][j] = 0 for all j
//         // if you use int dp[n + 1][m + 1], then you need to take care of this part
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1));
// 		for (int i = 1; i <= n; i++) {
// 			for (int j = 1; j <= m; j++) {
//                 // if both character is same
// 				if (nums1[i - 1] == nums2[j - 1]) {
//                     // then we add 1 to the previous state, which is dp[i - 1][j - 1]
//                     // in other word, we extend the repeated subarray by 1
//                     // e.g. a = [1], b = [1], length of repeated array is 1
//                     //      a = [1,2], b = [1,2], length of repeated array is the previous result + 1 = 2
// 					dp[i][j] = dp[i - 1][j - 1] + 1;
//                     // record the max ans here
// 					ans = max(ans, dp[i][j]);
// 				} else {
//                     // if you are looking for longest common sequence,
//                     // then you put dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); here
//                     // however, this problem is looking for subarray,
//                     // since both character is not equal, which means we need to break it here
//                     // hence, set dp[i][j] to 0
//                     // since we use vector<vector<int>> dp instead of int dp[n + 1][m + 1]
//                     // this part can be skipped as it is already 0
// 				}
// 			}
// 		}
// 		return ans;
//     }
// };