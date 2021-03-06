#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {

  vector<string> strings;

  strings.push_back("one");
  strings.push_back("two");
  strings.push_back("three");

  for(int i=0; i<strings.size(); i++) {
    cout << strings[i] << endl;
  }

  cout << "End of first for loop." << endl;

  for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
    cout << *it << endl;
  }

  cout << "End of second for loop." << endl;

  vector<string>::iterator it = strings.begin();
  it += 2;

  cout << *it << endl;

  return 0;
}
