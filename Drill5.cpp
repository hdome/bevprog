#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() try {


// Code Begins


cout<<"Success!\n"; 

cout<<"Success!\n"; 

cout<<"Success"<<"!\n"; 

cout<<"Success"<< '!' <<'\n'; //a '!' -et csak zért raktam hozzá mert mindenhol máshol megvolt csak itt nem

int res=7; vector<int> v(10); v[5] = res; cout << "Success!\n"; 

vector<int> v2(10); v2[5] = 7; if (v2[5]!=7){} cout << "Success!\n"; 

if (true) cout << "Success!\n"; else cout << "Fail!\n"; 

bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";

string s = "ape"; string c1 = "fool"; if (true) cout << "Success!\n"; 

string s1 = "ape"; if (s1!="fool") cout << "Success!\n"; 

string s2 = "ape"; if (s2=="fool"){} cout << "Success!\n"; 

string s3 = "ape"; if (s3!="fool") cout << "Success!\n"; 

vector<char> v3(5); for (int i=0; i<v3.size(); ++i){}  cout << "Success!\n";

string s4 = "Success!\n"; for (int i=0; i<6; ++i){} cout << s4; 

if (true) cout << "Success!\n"; else cout << "Fail!\n"; 

int x = 2000; int c2 = x; if (c2==2000) cout << "Success!\n"; 

string s5 = "Success!\n"; for (int i=0; i<10; ++i){} cout << s5; 

vector<int> v5(5); for (int i=0; i<=v.size(); ++i){} cout << "Success!\n"; 

int i=0; int j = 9; while (i<10) ++i; if (j<=i) cout << "Success!\n"; 

int x1 = 2; double d = 5/(x1-1); if (d==2*x1+1) cout << "Success!\n";

string s6 = "Success!\n"; for (int i=0; i<=14; ++i) cout << s6[i]; 

int i1=2; int j1=0; while (j1<10){ ++j1; if (j1<i1) cout << "Success!\n";} 

int x2 = 4; double d1 = 5/(x2-2); if (d1=2*x2-0.5) cout << "Success!\n"; 

cout << "Success!\n"; 

// Code Ends

return 0;
}



catch (exception& e) {
cerr << " Lerror: " << e.what() << '\n';
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
return 2;
}
