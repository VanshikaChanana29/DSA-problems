// it is usefull in parsing  the input 
// #include <bits/stdc++.h>
// using namespace std;
  
// int countWords(string str)
// {
//     // breaking input into word using string stream
//     stringstream s(str); // Used for breaking words 
//     string word; // to store individual words
  
//     int count = 0;
//     while (s >> word)
//         count++;
//     return count;
// }
  
// // Driver code
// int main()
// {
//     string s = "geeks for geeks geeks "
//                "contribution placements";
//     cout << " Number of words are: " << countWords(s);
//     return 0;
// }

// count the frequecies of the word 

// void printfrequencies(string st){
//     map<string , int > FW;
//     stringstream ss(st); //used for packing words 
//     string word ;
//     while( ss >> word){
//         FW[word]++;


//     }
//     map<string, int >::iterator m ;
//     for(m = FW.begin() ; m != FW.end() ; m++){
//         cout << m->first << " -> ";
//         cout << m->second << "\n";
//     }
// }
// int main(){
//     string s = "jhg kjhgfd jhgfd kjhgf d"; 
//     printfrequencies(s);
//     return 0 ;
// }

#include <iostream>
#include <sstream>
using namespace std ;
// using namespace std ;
// int main(){
//     string s  = "134456";
//     stringstream geek(s) ;
//     int x = 0 ;
//     geek >> x ;
//     cout << " The vaue of x is " << x ;
//     return  0 ;
// }
// int main(){
//     cout << "Enter the number defined " << endl ;
//     int n ;
//     cin >> n ; 
//     stringstream sso ; 
//     sso << n ;
//     string strinput ; 
//     sso >> strinput ;
//     cout << " The integer number is " << n << endl ;
//     cout << " the string form of interger number is " <<strinput << endl ;
//     return 0 ;
    


