#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void show_base_list(){
    cout << "                          student management system                    " <<endl;
    cout << "please choose the service that you want to do for!"<<endl;
    cout << "                                  services                   " <<endl;
    cout << "     1- Student"<<"                                 2- Teacher"<<endl;
    cout << "     3- Course"<<"                                  4- Exit"<<endl;
}
void show_list(string thing){
    cout <<"                                  "<<thing<<"                                    "<<endl;
    cout << "     1- Add "<<thing<<"                          2- Remove "<<thing<<endl;
    cout << "     3- Edit "<<thing<<"                         4- Show "<<thing<<endl;
    cout << "                                  5-Exit                   " <<endl;
}
int main(){
    int process, flag =1;
    while (flag)
    {
        show_base_list();
        cin >> process;
        if (process==1){
            show_list("Student");
            flag = 0;
        }else if(process==2){
            show_list("Teacher");
            flag = 0;
        }
        else if (process==3){
            show_list("Course");
            flag = 0;
        }else if (process==4){
            cout << "Process Exit"<<endl;
            flag =0;
        }else{
            cout << "Invalid Choose"<<endl;
        }   
    }


    
}