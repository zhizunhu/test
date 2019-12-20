//
// Created by zzh on 2019/11/21.
//
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){
    for (int i=0; i < 200; i++){
        if(i < 10) {
            string oldname = string("../day_right/Image") + "00" + to_string(i) + ".jpg";
            string newname = string("../day_right/Image") + to_string(i + 200) + ".jpg";
            const char* a = oldname.c_str();
            const char* b = newname.c_str();
            cout << oldname << endl;
            cout << newname << endl;
            if ( rename(a, b) == 0)
                cout << i << "succeed" << endl;
            else
                cout << i << "failed" << endl;
        }
        if ( i >9 && i < 100){
            string oldname = string("../day_right/Image") + "0" + to_string(i) + ".jpg";
            string newname = string("../day_right/Image") + to_string(i + 200) + ".jpg";
            const char* a = oldname.c_str();
            const char* b = newname.c_str();
            cout << oldname << endl;
            cout << newname << endl;
            if ( rename(a, b) == 0)
                cout << i << "succeed" << endl;
            else
                cout << i << "failed" << endl;
        }
        if( i > 99){
            string oldname = string("../day_right/Image")   + to_string(i) + ".jpg";
            string newname = string("../day_right/Image") + to_string(i + 200) + ".jpg";
            const char* a = oldname.c_str();
            const char* b = newname.c_str();
            cout << oldname << endl;
            cout << newname << endl;
            if ( rename(a, b) == 0)
                cout << i << "succeed" << endl;
            else
                cout << i << "failed" << endl;
        }


    }
    return 0;
}
