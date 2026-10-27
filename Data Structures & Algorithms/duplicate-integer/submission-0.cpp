class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        
      int c=0;
      for(int i=0;i<n-1;i++)
      {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                c++;
            }
        }
      } 
      if(c==0)
      return false;
      return true; 
    }
};