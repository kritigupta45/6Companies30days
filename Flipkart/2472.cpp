// class Solution {
// public:
//     vector<int> primes;
//     vector<bool> is_prime;
//     void prime_sieve(int n) {
//         is_prime.assign(n + 1, 1);
//         is_prime[0] = is_prime[1] = 0;
//         for (int i = 4; i <= n; i += 2) is_prime[i] = 0;
//         for (int i = 3; i * i <= n; i += 2) {
//           if (is_prime[i]) {
//             for (int j = i * i; j <= n; j += i * 2) {
//               is_prime[j] = 0;
//             }
//           }   
//         } 
//         primes.push_back(2);
//         for (int i = 3; i <= n; i += 2) {
//             if (is_prime[i]) {
//               primes.push_back(i);
//             }
//         }
//     }
    
//     vector<int> closestPrimes(int left, int right) {
//         // generate prime numbers
//         prime_sieve(right);
//         int l = -1, r = -1, mi = INT_MAX;
//         // for each prime number
//         for (int i = 1; i < primes.size(); i++) {
//             // if it is within the target range
//             if (left <= primes[i - 1] && primes[i] <= right) {
//                 // we calculate the difference
//                 int d = primes[i] - primes[i - 1];
//                 // if it is less than the min one
//                 if (d < mi) {
//                     // update min
//                     mi = d;
//                     // set l and r
//                     l = primes[i - 1];
//                     r = primes[i];
//                 }   
//             }
//         }
//         // if both l and r are set, then return {l, r}
//         // else return {-1, -1}
//         return l != -1 && r != 1 ? vector<int>{l, r} : vector<int>{-1, -1};
//     }
// };