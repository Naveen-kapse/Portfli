#include <bits/stdc++.h>
using namespace std;
#define func(x) (x*x+2*x+1)
signed main()
{float lowerLimit, upperLimit;
cout << "Enter the lower limit"<< " ";
cin >> lowerLimit;
cout << "Enter the upper limit"<< " ";
cin >> upperLimit;
int n;
cout << "Enter the number of intervals"<< " ";
cin >> n;
float h = (upperLimit -lowerLimit) / n;
float sum1 = 0, sum2 = 0;
float result;int p = 1;
while (p < n)
{float s = lowerLimit + p * h;
if (p % 2 == 0)
{sum1 += 2 * func(s);}
else{sum2 += 4 * func(s);}
p++;}
result = h / 3 * (func(lowerLimit) + func(upperLimit) + sum1 + sum2);
cout << "The approx. value of the given Simpson's rule ="<< " " << result << "\n";
return 0;
}