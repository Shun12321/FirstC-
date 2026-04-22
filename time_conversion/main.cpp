#include<iostream>
using namespace std;
int main(){
    int s,h,m;
    cin >> s ;

    h = s / 3600;
    s = s - 3600*h;
    m = s / 60;
    s = s - 60*m;

    cout << h << "時間" << m << "分" << s << "秒" << endl;
    
}