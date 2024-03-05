#include <iostream>
#include <string>
#include <stack>

using namespace std;

/** ASCII values of brackets
 * '(' = 40;
 * ')' = 41;
 * '[' = 91;
 * ']' = 93;
 * '{' = 123;
 * '}' = 125;
*/

stack<char> st1, st2;

int search(int cases) {
      int key, flag = 0;
      char a;

      st2 = st1;

      //printing just verify
      while(st2.empty()) {
            cout << st2.top();
            st2.pop();
      }
//
//      switch (cases) {
//            case 1:
//                  key = 40;
//                  break;
//            case 2:
//                  key = 91;
//                  break;
//            case 3:
//                  key = 123;
//                  break;
//            default:
//                  break;
//      }
//
//      while (st2.empty()){
//            a = st2.top();
//            if(a == key) {
//                  flag = 1;
//                  break;
//            }
//            st2.pop();
//      }

      return flag;
}

int main() {
      string str = "[{]}";
//      cin >> str;
      int i;

      for (i = 0; i < str.length(); i++) {
            if (st1.empty()) {
                  st1.push(str[i]);
            }
            else {
                  if(str[i] == 40 || str[i] == 91 || str[i] == 123) {
                        st1.push(str[i]);
                  }
                  else {
                        if (str[i] == 41) {
                              if (search(1) == 0)
                                    break;
                        }
                        else if (str[i] == 93) {
                              if (search(2) == 0)
                                    break;
                        }
                        else {
                              if (search(3) == 0)
                                    break;
                        }
                  }
            }

      }
      if(i < str.length()) {
            cout << "not a proper sequence\n";
      }
      else if(str.length() == i){
            cout << "a proper sequence\n";
      }
}
