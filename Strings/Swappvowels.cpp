// Write a function that takes a string as input and reverse only the vowels of a string.

https://leetcode.com/problems/reverse-vowels-of-a-string/

string vowels = "aeiouAEIOU";
string returnSwappVowels(string str){
  // get the front and the back pointer to swpp the vowels
  int first = 0;
  int back = str.length() - 1;
  // while first < last
  while(first < back){
    // if not vowel
    if(!isVowel(str[first]))
      first++;
    // if not vowel
    else if(!isVowel(str[back]))
      back--;
    // else vowel swapp
    else
        swap(str[first++], str[back--]);
  }
  return str;
}
// function to check for vowel condition
bool isVowel(char ch){
   return vowels.find(ch) != -1;
}

// the time complexity of the above algorithm is O(n).
// the space complexity of the above algorithm is O(1), no extra space.
