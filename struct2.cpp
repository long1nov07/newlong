#include<iostream>
#include<string>

using namespace std;
// khai báo biến
struct Information{
    string Name;
    string Gender;
    int Height;
    int Age;
};

int main(){
    struct Information i;
    cout<<"nhập tên người dùng: ";
    getline(cin,i.Name);

    cout<<"nhập giới tính(nam,nữ,lgbt): ";
    getline(cin,i.Gender);
// xác định giới tính 
    if (i.Gender == "nam" && "nữ" && "lgbt"){        
    }
    else{
        cout<<"giới tính không xác định";
    }

    cout<<"nhập tuổi: ";
    cin>> i.Age;

    cout<<"nhập chiều cao: ";
    cin>> i.Height;
// kết luận
    if (i.Age>10 && i.Age < 18 && i.Height > 1.60 && i.Height < 1.70){
        cout<<"người dùng "<< i.Name << i.Age <<" tuổi "<<" chiều cao bình thường ";
    }
    else if (i.Age>10 && i.Age < 18 && i.Height > 1.70 && i.Height < 1.80){
        cout<<"người dùng "<< i.Name << i.Age <<" tuổi "<<" cao ráo đẹp trai";

    }
    else if (i.Age>10 && i.Age < 18 && i.Height > 1.80  ){
        cout<<"người dùng "<< i.Name << i.Age <<" tuổi "<<"cao khủng khiếp";
    }
    else if (i.Age>10 && i.Age < 18 && i.Height < 1.60  ){
         cout<<"người dùng "<< i.Name << i.Age <<" tuổi "<<"thấp tẹt";    
    }
}   
