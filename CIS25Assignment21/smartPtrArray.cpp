#include <iostream>
#include <memory>
#include "smartPtrArray.hpp"
using namespace std;

int smartPtrArray(){
    int entries = 0;
    int total = 0;
    unique_ptr<int[]> ptr(new int[entries]{});
    for(int i = 0; i > -1; i++){
        entries++;
        cout << "Enter a number (enter 0 to stop): " << endl;
        cin >> ptr[i];
        if(ptr[i] == 0){
            break;
        }
    }
    for(int j = 0; j < entries; j++){
        total+= ptr[j];
    }
    return total;
}
