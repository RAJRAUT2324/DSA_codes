#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int getLength( char arr[], int size) {
  int length = 0;
  int index = 0;
  
  while(arr[index] != '\0') {
    length++;
    index++;
  }
  //agr main yaha tak aagya
  //iska mtlb,, mujhe null character milgya
  return length;
}

void replaceByX(char arr[], int size) {
  
  for(int i=0; i<size; i++) {
    if(arr[i] == ' ') {
      arr[i] = 'X';
    }
  }
  
}

void convertLCToUC(char arr[], int size) {

  for(int i=0; i<size; i++) {

    //if lowercase character then convert to upper case
    //if already a upper case then ignore
    if(arr[i] >='a' && arr[i] <='z') {
      arr[i] = arr[i] - 'a' + 'A';
    }
    
  }
  
}

void convertUCToLC(char arr[], int size) {
  for(int i=0; i<size; i++) {
    //if already a lowercase character, then ignore
    //if a upper case character, then convert to lowercase
    if(arr[i] >='A' && arr[i] <= 'Z') {
      arr[i] = arr[i] -'A' + 'a';
    }
  }
}

void reverseCharArray(char arr[], int size) {
  int s = 0;
  //main yaha pr galti karunga
  int e = strlen(arr) - 1;

  while(s <= e ) {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

bool checkPalindrome(char arr[], int size) {
  int s = 0;
  int e = strlen(arr) - 1;

  while(s <= e) {
    //match // no match
    if(arr[s] != arr[e]) {
      //its not a plaindrome
      return false;
    }
    else {
      //if its a match, s aage, e piche
      s++;
      e--;
    }
  }
  //gar main yaha tak aagya 
  //isk mtlb, ssaare character match hue h 
  return true;
  
}


int main() {   


  string first = "Babbar";
  string second = "aBbbar";

  cout << first.compare(second);

  // string name = "lovebabbark";

  // //int ans = name.find("babbar");
  // //int ans = name.find("babbar", 5);
  // int ans = name.find('b');
  // cout << "ans: " << ans << endl;
  // if(name.find('k') == string::npos) {
  //   cout << "k is not present inside string" << endl;
  // }
  // else {
  //   cout << "K is present inside string" << endl;
  // }
  //cout << ans << endl;

  // string name = "abcdefghij";
  // //cout << name.substr(2) << endl;
  // cout << name.substr(1,5) << endl;

  // string name = "babbar";
  // cout << name.front() << endl;
  //cout << *(name.end()-1);
  
  // reverse(name.begin(), name.end()) ;
  // cout << name;

  
  // string firstname = "love";
  // string lastname = "babbar";
  // string fullname = firstname + " " + lastname;
  
  // cout << fullname << endl;
  // cout << "length: " << fullname.length() << endl;
  // fullname.clear();
  // cout << "length: " << fullname.length() << endl;
  
  // if(fullname.empty()) {
  //   cout << "String ki length 0 h" << endl;  
  // }
  // else {
  //   cout << "String ki length non zero h " << endl;
  // }
  
  // cout << fullname << endl;
  // cout << "Hi" << endl;

  //creation // declration 
  // string str;
  // //initialise
  // string name = "Babbar";
  // string fullName = "Love Babbar";

  // //input 
  // //cin >> s;
  // getline(cin,str);
  // cout << "Output: " << str<< endl;
  // cout << "Length:" << str.length() << endl;
  // str.push_back('X');
  // cout << "Output: " << str<< endl;
  // cout << "Length:" << str.length() << endl;
  // str.pop_back();
  // cout << "Output: " << str<< endl;
  // cout << "Length:" << str.length() << endl;

  // cout << str[0] << endl;
  

  //print 
  // cout << name << endl;
  // cout << fullName << endl;


  
  // char arr[50];
  // cout << "Enter the value:" ;
  // cin.getline(arr,50);

  // //replaceByX(arr,50);
  // bool ans = checkPalindrome(arr,50);

  // cout << "Output:  " << ans << endl;

  // cout << "length of array: " << getLength(arr, 50) << endl;
  // cout << strlen(arr) << endl;


  
  // char arr[50];
  // //to include space inside the input stream 
  // cin.getline(arr,50,'B');
  // cout<<"Output: " << arr;

  // char arr[4];
  // cin >> arr;
  // cout << arr;
  
  // char arr[4];
  // arr[0] = 'l';
  // arr[1] = 'o';
  // arr[2] = 'v';
  // arr[3] = 'e';

  // cout << arr ;

  // char ch = arr[2];
  // int val = (int)ch;
  // cout << "ASCII value of character at 2nd index: " << val << endl;
  // cout << arr;

  
  // //create a char array
  // char arr[10];
  // cin >> arr;
  // //cout << "Input aapne ye dia hai: " << arr << endl;
  
  // for(int i=0; i<10; i++){
  //   cout << arr[i] << endl;
  // }

  // cout << arr;
  
  return 0;
}