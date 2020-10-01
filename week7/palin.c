

// Big O complexity of checking if palindrome
//
// out-in or middle-out  


int strl(char* s) {
  int i = 0;
  // the null byte character
  for (; s[i] != '\0'; ++i);
  return i;
}

int is_palindrome(char* s){
  palindrom_helper(s, 0, strl(s)-1);
}

int palindrom_helper(char* s, int l, int r) {
  if (l >= r) return 1;
  return s[l] == s[r] ? palindrom_helper(s, l+1, r-1) : 0;
}
