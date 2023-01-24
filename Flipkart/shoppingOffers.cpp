// class Solution {
// public:
//     int ans=INT_MAX;
    
//     void helper(vector<int>& price, vector<vector<int>>& special, vector<int>& needs, int n, int k){
        
//         if(!n){
//             ans=min(ans, k);
//         }
        
//         if(k>ans) return;
        
//         for(int i=0; i<special.size(); i++){
//             bool suff=true;
//             int s=0;
            
//             for(int j=0; j<needs.size(); j++){
//                 if(needs[j]<special[i][j]) suff=false;
//             }
            
//             if(suff){
//                 for(int j=0; j<needs.size(); j++){
//                     needs[j]-=special[i][j];
//                     s+=special[i][j];
//                 }
//                 helper(price, special, needs, n-s, k+special[i].back());
                
//                 for(int j=0; j<needs.size(); j++){
//                     needs[j]+=special[i][j];
//                 }
//             }
//         }
        
//         for(int i=0; i<needs.size(); i++) k+=needs[i]*price[i];
        
//         ans=min(ans, k);
//         return;
//     }
    
//     int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        
//         int n=0;
        
//         for(auto a:needs) n+=a;
        
//         helper(price, special, needs, n, 0);
//         return ans;
//     }
// };