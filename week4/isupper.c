
int my_isupper(char c);
int my_tolower(char c);

int main(){

}

// [A-Z] 
int my_isupper(char c) {
  return c <= 'Z' && c >= 'A';
}

// every character has a corresponding code [0-255]
// a = 97
// A = 65
// z - Z += 32
int my_tolower(char c) {
  if (my_isupper(c)) {
    c + 32;
  }
  return c;
}
