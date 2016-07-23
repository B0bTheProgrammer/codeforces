#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string>
#include <map>
using namespace std;
int main()
{
string s;
cin >> s;
map<char,int> m;
m['a'] = 0;m['B'] = 0;m['C'] = 0;m['c'] = 0;m['D'] = 0;m['E'] = 0;m['e'] = 0;m['F'] = 0;m['f'] = 0;m['G'] = 0;m['g'] = 0;m['h'] = 0;m['i'] = 0;m['J'] = 0;m['j'] = 0;m['K'] = 0;m['k'] = 0;m['L'] = 0;m['l'] = 0;m['m'] = 0;m['N'] = 0;m['n'] = 0;m['P'] = 0;m['Q'] = 0;m['R'] = 0;m['r'] = 0;m['S'] = 0;m['s'] = 0;m['t'] = 0;m['u'] = 0;m['y'] = 0;m['Z'] = 0;m['z'] = 0;
m['A'] = 1;m['I'] = 1;m['H'] = 1;m['M'] = 1;m['O'] = 1;m['o'] = 1;m['T'] = 1;m['U'] = 1;m['V'] = 1;m['v'] = 1;m['W'] = 1;m['w'] = 1;m['X'] = 1;m['x'] = 1;m['Y'] = 1;
m['b'] = 2;m['d'] = 2;
m['p'] = 3;m['q'] = 3;
int l = s.length();
for(int i = 0;i<=(l/2);i++)
{
   /* cout << s[i];
    cout << s[l-i-1];*/


    int k;
  if(s[i] == s[l-i-1]){
      k = m.find(s[i])->second;
      if(k == 0)
      {
       cout << "NIE"; return 0;
      }else{
       //cout << "TAK";
      }
  }else{
    int k2 = m.find(s[l-i-1])->second;
    k = m.find(s[i])->second;
    if((k2 == k)&&(k>1))
    {
      // cout << "TAK";
    }else{
       cout << "NIE"; return 0;
    }

  }
 // cout << endl;
}
if(((l-1)%2) != 0)
{
  int k = m.find(s[(l/2)+1])->second;
  cout << s[(l/2)+1];
  if(k!=1){
   cout << "NIE"; return 0;
  }
}
    cout << "TAK";
    return 0;
}
