//Valid Palindrome


// Approach 1 Swapping alphanum elements front  Time O(n) Space O(1)

class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.size();  // ab: b a
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                s[cnt]=s[i];
                cnt++;
            }
        }
        //abba
        // 0 - cnt-1
        // 
        for(int i=0;i<cnt/2;i++)
        {
            if(tolower(s[i])!=tolower(s[cnt-1-i]))
                return false;
        }
        
        return true;
        
        
    }
};

// Approach 2 Two Pointers  Time O(n) Space O(1)


class Solution {
public:
    bool isPalindrome(string s) {
        
        int n=s.size();  // ab: b a
        int l=0;
        int r=n-1;
        while(l<r)
        {
            while(l<r && !isalnum(s[l]))
                  {
                      l++;
                  }
            while(l<r && !isalnum(s[r]))
                  {
                      r--;
                  }
                  if(tolower(s[l])!=tolower(s[r]))
                    return false;
                  l++;
                  r--;
            
        }
        return true;
        
        
    }
};