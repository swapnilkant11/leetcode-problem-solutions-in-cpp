// Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest 
// possible.

// created by Swapnil Kant
// on 19-06-2020

string findsmallestnumber(string num, int k){
  // now we will take a stack to find the minimum number.
  string st;
  // traverse the string and keep adding the number until the largest digit arrives in number.
  for(int i = 0; i < num.length(); i++){
     // when you get the max digit.
     while(!st.empty() && st.back() > num[i] && k)
       st.pop_back(), --k;
     st += num[i];
  }
  // while the digits are left.
  while(!st.empty() && k)
    st.pop_back(), --k;
  // remove leading zeroes.
  int i = 0;
  while(i < st.size() && st[i] == '0')
    ++i;
  return i == st.size()? "0":st.substr(i);
}

// thee time complexity of the above algorithm will be O(n).
// the space complexity of the above algorithm will be O(1).
