#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a = 3;
    long long b = 12345678912345;
    char c = 'a';
    float d = 334.230;
    double e = 14049.304930000;


    cin >> a >> b >> c >> d >> e;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << d << std::endl;
    std::cout << std::setprecision(9) << std::fixed;
    std::cout << e << std::endl;

    return 0;
}
