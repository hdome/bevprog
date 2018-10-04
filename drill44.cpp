#include "std_lib_facilities.h"

int main()
{
double szam=0;
double kicsi=0;
double nagy=100;
string unit;
while (szam != '|')
{
cin >> szam >> unit;
if (szam>nagy)
{
cout << szam << "The largest so far" << "\n";
nagy=szam;
}
else if (szam<kicsi)
{
cout << szam << "The smallest so far" << "\n";
kicsi=szam;
}
if(unit=="cm")
{
szam=szam/100;
szamok.push_back(szam);}
if (unit=="m")
{szam=szam;
szamok.push_back(szam);}
if (unit=="ft")
{szam=szam/3.28;
szamok.push_back(szam);}
if (unit=="in")
{szam=szam/39.37;
szamok.push_back(szam);}
if (unit!="cm"&&unit!="m"&&unit!="ft"&&unit!="in")
cout << "illegal unit" << "\n";
}
}
