class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
           

           // using the brute force solution.

           unordered_map<int,int> mp;

           int count = 0;

           for(auto & i:nums1){
               for(auto  & j: nums2){
                  
                  mp[i+j]++;
               }
           }
      


         // checking its comlement in rest of the  array.

         for(auto & c: nums3){
            for(auto & d: nums4){

                 int target = -(c+d);
                  if(mp.find(target)  != mp.end()){
                     count += mp[target];
                  }  
            }
         }


return count;

    }
};