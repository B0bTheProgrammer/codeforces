#include <iostream>
#include <istream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
int n;
char s;
cin >> s;
n = atoi(&s);
char a[n];
for(int i=0;i < n;i++)
{
 cin >> a[i];
}
/*cout << endl;
for(int i=0;i < n;i++)
{
 cout << atoi(&a[i]);
}*/
if(n == 1)
{
 if (atoi(a) == 0)
 {
  cout << "NO";
 }else{
  cout << "YES";
 }
}else{
    int k = 0;
    for(int i=0;i < n;i++)
    {
        if(a[i] == '0')k++;
    }
    if(k == 1){cout << "YES";
    }else{cout << "NO";}
}


    return 0;
}
