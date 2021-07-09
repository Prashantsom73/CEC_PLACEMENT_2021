int strStr(string haystack, string needle) {
    // int found = haystack.find(needle);
    // return found;
    int p,temp;
     if(needle.empty()){
        return 0;
    }
    for(int i=0;i<haystack.size();i++){
      for(int j=0;j<haystack.size();j++){
          if(haystack.substr(i,j+1)==needle){
            return i;
          }
      }
    }   
    return -1;
}