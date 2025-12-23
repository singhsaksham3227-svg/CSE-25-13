#include <bits/stdc++.h>
using namespace std;
#include <cstring>
int main() {
// string str;
// cout <<"enter a string :";
// getline (cin,str);
// cout <<"you entered: "<


// string str1 = {"hello"};
// string str2 {"joy"};
// string str3 {str2};
// string str4 (5,'a');

// cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4;

// string str1= {"hello"};
// string str2 {str1,3};
// string str3 {"dipika",3};
// cout <<str1<<endl<<str2<<endl<<str3;
// return 0;

// string str = "welcom";
// cout<<str[6]<<endl; //no bound checking 
// cout <<str.at(6);

// string str = "welcome home";
// for (char ch : str){     // for each loop 
//     cout << ch<<" "
// }

// string str1 = "welcome";
// string str2 = "home";
// cout << str1+str2<<endl;
// cout << str1.append(str2)<<endl;
// cout << str1+" "+str2+" "+"joy"<<endl;
// cout << "length of str1: "<<str1.length()<<endl;

string s = "hello world";      //inital string
cout <<"original string :"<<s<<endl;

int pos = s.find("world");     //find
cout <<"find (world) position :"<<pos<<endl;

cout<<"rfind(l) position :  "<< s.rfind("1")<<endl;    //rfind

s.append(" !!!");              //append()
cout <<"after append:"<<s<<endl;

s.insert(6,"beautiful ");      //insert ()
cout << "after insert():"<<s<<endl;

s.erase(6,10);                //erase ()
cout <<"after erase():"<<s<<endl;

s.replace (6,5,"universe");   //replace 
cout <<"after replace :"<<s<<endl;

string str2 = "hello universe !!!";
if (s.compare(str2) == 0)       //compare
cout <<"strings are equal "<<endl;
else 
cout <<"strings are not equal "<<endl;

string sub = s.substr(6,8);    //substr
cout <<"substring using substr():"<<sub<<endl;

cout <<"length of string :"<< s.length ()<<endl;      //length ()/size ()
cout<<"size of string: "<<s.size()<<endl;
     
cout<<"character at index 1 using at(): "<<s.at(1)<<endl;
cout<<"character at index 2 using array index: "<<s[2]<<endl;

const char* style = s.c_str();
cout << "C-style string using c_str():"<<style <<endl;
return 0;
}