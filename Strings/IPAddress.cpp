// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".

https://leetcode.com/problems/defanging-an-ip-address/

string defangIPaddr(string address) {
    int n = address.length();
    string str = "";
    for(int i = 0; i < n; i++){
      // if current character is '.' do this
    if(address[i] == '.'){
       str += '[';
       str += address[i];
       str += ']';
    }
    // else add it to the string
    else
      str += address[i];
  }
  return str;
}

// the time complexity of the above algorithm is O(n), 'n' is the length of string.
// the space complexity of the above algorithm is O(n).
