
//Power of 4

//Solution 1  Time O(log4(num)) Space O(1)

class Solution {
public:
    bool isPowerOfFour(int num) { 
        
        if(num<1) return false;
        
        while(num>1)
        {
            if(num%4 !=0) return false;
            num=num/4;
        }
        
        return true;
        
  
        
    }
};

//Solution 1 Time O(log2(num)) Space O(1)

class Solution {
public:
    bool isPowerOfFour(int num) { 
       
        if(num<1)
            return false;
        bitset <32> n=num;
        if(n.count() !=1) return false;
        
        int cnt=0;
        while(num)
        {
            num=num>>1;
            cnt++;
        }
        if(cnt%2==0) return false;
        
        return true;
        
  
        
    }
};

//Solution 3  Time O(1) Space O(1)
class Solution {
public:
    bool isPowerOfFour(int num) { 
       
        if(num<1)
            return false;
        bitset <32> n=num;
        if(n.count() !=1) return false;
        
       if((num+1)%3==0) return false;
        
        return true;
        
  
        
    }
};
//Solution 4 Time O(1) Space O(1)

class Solution {
public:
    bool isPowerOfFour(int num) { 
    
    return num>0 && (num&(num-1))==0 && (num & 0b01010101010101010101010101010101);
        
    }
};