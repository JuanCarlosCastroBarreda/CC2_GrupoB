#include <iostream>
#include "DynamicIntegerArray.h"

using namespace std;

int main(){
    
    DynamicIntegerArray pa;
    cout<<pa.getSize()<<endl;

    int arr[]={1,2,3,4,5};
    DynamicIntegerArray pa2(arr,5);
    DynamicIntegerArray pa3=pa2;
    
    cout<<pa3.getSize()<<endl;
    DynamicIntegerArray *ptr=&pa3;
    cout<<ptr->getSize()<<endl;

    pa2.insert(8,3);
    pa2.print();
    pa2.remove(3);
    pa2.print();
    pa2.push_back(6);
    pa2.print();
    

    return 0;
    }