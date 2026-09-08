int strStr(char* haystack, char* needle) {
    int m = strlen(haystack);
    int n = strlen(needle);
    if (n == 0) return 0;  
    if (n > m) return -1; 
    for (int i = 0; i <= m - n; i++) {
        bool match = true;
        for (int j = 0; j < n; j++) {
            if (haystack[i + j] != needle[j]) {
                match = false;
                break;
            }
        }
        
        if (match) return i; 
    }
    
    return -1; 
  
}
