#define DYNAMICINTARRAY_H__
#include <iostream>
class DynamicIntegerArray{
    private:
        int *data;
        int size;
    public:
        DynamicIntegerArray(){
            this->size=0;
            this->data=new int[0];
        }
        DynamicIntegerArray(int arr[], int size){
            this->size=size;
            this->data=new int [size];
            for(int i=0;i<size;i++)
                data[i]=arr[i];
        }
        DynamicIntegerArray(const DynamicIntegerArray &o){
            this->size=o.size;
            this->data=new int[o.size];
            for(int i=0; i<size;i++)
                data[i]=o.data[i];
        }
        
        void insert(int value, int pos){
            int *tmp=new int[size+1];
            bool inserted=false;
            for(int i=0;i<size;i++){
                if(i==pos){
                    inserted=true;
                }
                if(inserted==false){
                    tmp[i]=data[i];
                }
                else{
                    tmp[i+1]=data[i];
                }
            }
            tmp[pos]=value;
            delete []data;
            size+=1;
            data=tmp;
        }
        void remove(int pos){
            int *tmp=new int[size-1];
            bool removed=false;
            for (int i = 0; i < size-1; i++) {
                if(i==pos){
                    removed=true;
                }
                if(removed==false){
                    tmp[i]=data[i];
                }
                else{
                    tmp[i]=data[i+1];
                }
            }
            delete []data;
            size-=1;
            data=tmp;
        }
        void push_back(int value){
            int *tmp=new int[size+1];
            for (int i = 0; i < size; i++)
                tmp[i]=data[i];
            tmp[size]=value;
            delete []data;
            size+=1;
            data=tmp;
        }

        void print() const {
            for(int i = 0; i < size; i++)
                std::cout << data[i] << " ";
            std::cout << std::endl;
        }
        
        int getSize() const{
            return size;
        }
        ~DynamicIntegerArray(){
            delete[] data;
        }
};