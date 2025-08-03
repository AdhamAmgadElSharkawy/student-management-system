#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int process, flag =1;
    while (flag)
    {
        cout << "                          student management system                    " <<endl;
    cout << "please choose what do you want to do!"<<endl;
    cout << "                                  STUDENT                   " <<endl;
    cout << "     1- Add Student"<<"                          2- Remove Student"<<endl;
    cout << "     3- Edit Student"<<"                         4- Show Student"<<endl;
    cout << "                                  5-Exit                   " <<endl;
    cin >> process;
    if (process==1){
        cout << "Process Add"<<endl;
    }else if(process==2){
        cout << "Process Remove"<<endl;
    }
    else if (process==3){
        cout << "Process Edit"<<endl;
    }else if(process==4){
        cout << "Process Show"<<endl;
    }else if (process==5){
        cout << "Process Exit"<<endl;
        flag =0;
    }else{
        cout << "Invalid Choose"<<endl;
    }   
    }


    
}