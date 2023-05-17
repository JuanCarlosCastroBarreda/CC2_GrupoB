#include <iostream>
#include "DinamicArrayTemplates.h"

using namespace std;

int main() {
    DynamicArray<int> pa;
    cout << pa.getSize() << std::endl;

    int arr[] = {1, 2, 3, 4, 5};
    DynamicArray<int> pa2(arr, 5);
    DynamicArray<int> pa3 = pa2;

    cout << pa3.getSize() << std::endl;
    DynamicArray<int>* ptr = &pa3;
    cout << ptr->getSize() << std::endl;

    pa2.insert(8, 3);
    pa2.print();
    pa2.remove(3);
    pa2.print();
    pa2.push_back(6);
    pa2.print();

    return 0;
}