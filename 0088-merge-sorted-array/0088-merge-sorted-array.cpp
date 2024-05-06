class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i=0;
        while(i<m){
                 
                ans.push_back(nums1[i]);
        
            i++;
    
        }
        nums1.erase(nums1.begin(), nums1.end());
        for(int i=0;i<ans.size();i++)
        {
            nums1.push_back(ans[i]);
        }
       for(int i=0;i<n;i++) 
       {
        nums1.push_back(nums2[i]);
       }
       sort(nums1.begin(), nums1.end());
    }
};