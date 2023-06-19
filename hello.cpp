#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // tiêu đề 
    cout <<"10a3 student"<< endl;
    cout << setw(5) << left <<"serial ";
    cout << setw(30) << left <<" name";
    cout << setw(5) << right <<"total score"<< endl;
    // khoảng trống 
    cout << setfill('-');
    cout <<setw(48)<<'-'<< endl;
    // reset fill
    cout << setfill(' ');
    // thông tin người 1
    cout << setw(5) << left <<"1";
    cout << setw(30) << left <<"   nguyen thanh long";
    cout << setw(8) << right <<"6"<< endl;
    // thông tin người thứ 2
    cout << setw(5) << left <<"2";
    cout << setw(30) << left <<"   pham tran dang khoa";
    cout << setw(8) << right <<"7"<< endl;
    // thông tin người thứ 3
     cout << setw(5) << left <<"3";
    cout << setw(30) << left <<"   to vu trung kien";
    cout << setw(8) << right <<"8"<< endl;



}