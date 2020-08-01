//Detect Capital

//Solution 1 using conditions
//Time Complexity O(n) 
//Space Complexity O(1)

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        
        if(isupper(word[0]) && isupper(word[1])) //USA   //USbc
           {
               for(int i=2;i<n;i++)
                   if(!isupper(word[i]))
                        return false;
           }
         else{                         // Google  leetcode  //leeTcode
             for(int i=1;i<n;i++)
                 if(!islower(word[i]))
                     return false;
         }
         return true;
          }
        
   
};

//Solution 2 using regex
//Time Complexity O(2^n) 
//Space Complexity O(1)

class Solution {
public:
    bool detectCapitalUse(string word) {
     // all captial or first capital all other small or all small
    
    regex reg("[A-Z]*|[A-Z][a-z]*|[a-z]*");
    return regex_match(word,reg);
    }
};


//Solution 3 using capital letter count
//Time Complexity O(n) 
//Space Complexity O(1)

class Solution {
public:
    bool detectCapitalUse(string word) {
     // all captial or first capital all other small or all small
    int n=word.size();
    int capital_count=0;
    
    for(int i=0;i<n;i++)
    {
        if(word[i]<='Z')
            capital_count++;
    }
    if(word[0]<='Z'&& (capital_count==1 || capital_count==n))
        return true;
    if(word[0]>='a' && capital_count==0)
        return true;
        
    return false;
    }
};