// beecrowd Time Conversion

#include <iostream>

using namespace std;

int main() {
    int a, h, m, s;
    cin >> a;
    if (a<60) {
        s = a;
        cout << "0:0:" << a << endl;
    }
    if ((a >=60) && (a<=3599)) {
        m = a/60;
        a = a%60;
        s = a;
        cout << "0:"<<m<<":"<<s << endl;
    }
    if (a>3599) {
        h = a/3600;
        a = a%3600;
        m = a/60;
        a = a%60;
        s = a;
        cout << h << ":" << m << ":" << s << endl;
    }
    return 0;
}
