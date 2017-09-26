

#if 0
#include<stdio.h>

int
numberofone(int n){

    int count=0;

    for(;n;){
        count++;
        n=n&(n-1);
    }

    return count;
}


int main()
{

    printf("Number of one=%d\n",numberofone(4));
    printf("Number of one=%d\n",numberofone(2));
    printf("Number of one=%d\n",numberofone(3));
    printf("Number of one=%d\n",numberofone(5));




}

#endif


#if 0

#include <iostream>
#include<string.h>

using namespace std;


class testClass
{
     char* str;

public:

    testClass(const testClass &obj){

        int len;
          if(obj.str!=NULL){
             len=strlen(obj.str);
           this->str = new char[len+1];

           strcpy(this->str,obj.str);
          }
    }





};


class base
{
 public:
    virtual void foo(){
        cout<<"base\n";
    } //print base
};


class derived : public base
{
 public:
    virtual void foo(){
        cout<<"Drive\n";

    } // print derived
};



int main(int argc, char *argv[])
{
    cout<<"this is testing"<<endl;
    derived d;
     base b = d;
     b.foo();

    return 0;
}

#endif
