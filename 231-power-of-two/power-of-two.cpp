class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
       for(int i=1;i<=(log2(n)+1);i++)
       {
           if(pow(2,i)==n) 
           {return true;
           }
           
       }
        return false;
    }
};