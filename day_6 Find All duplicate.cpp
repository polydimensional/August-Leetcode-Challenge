//Approach 1

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map <int,int> umap;
        vector <int> out;
        for(int i=0;i<n;i++)
        {
            umap[nums[i]]++;
        }
        for(auto x : umap)
        {
            if(x.second>1)
            {
                out.push_back(x.first);
            }
        }
        return out;
    }
};

//Approach 2

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> out;
        for(int i=0;i<n;i++)
        {
            int pos=abs(nums[i])-1;
            if(nums[pos]<0)
               out.push_back(abs(nums[i])) ;
            nums[pos]=-nums[pos];
            
        }
        return out;
    }
};