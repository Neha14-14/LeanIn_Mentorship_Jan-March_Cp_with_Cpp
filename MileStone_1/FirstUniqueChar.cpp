class Solution {
public:
    int firstUniqChar(string s) {
     for(int i=0;i<s.length();i++){
      for(int j=i+1;j<s.length();j++){
          if(s.charAt(i)==s.charAt(j)){
              break;
          }
          
      }
      
  }
    return -1;
    }
};
