
#if 0
#include<stdio.h>



int divisbleBy8(int n){


    n=n&7;

    return !n;

}

int divisbleBy32_one(int n){

    int flag=0;

    for(int i=0;i<4;i++){

    flag = divisbleBy8(n);
    if(!flag) return 0;
    n-=32;
    if(n==32) return 1;
    }

    return 1;


}


int divisbleBy32(int n){

    int flag=0;

    n=n&31;

    return !n;




}

int main()
{

    printf("divisble by 32 %s\n",(divisbleBy32(18))? "true":"false");
    printf("divisble by 32 %s\n",(divisbleBy32(64))? "true":"false");
    printf("divisble by 32 %s\n",(divisbleBy32(1088))? "true":"false");
    printf("divisble by 32 %s\n",(divisbleBy32(1081))? "true":"false");

    printf("divisble by 32 %s\n",(divisbleBy32(832))? "true":"false");
    printf("divisble by 32 %s\n",(divisbleBy32(832+55))? "true":"false");



}

#endif



#if 0
#include<stdio.h>

int divisbleBy8(int n){


   n=n&7;

    return !n;

}

int main()
{

    printf("%s",(divisbleBy8(18))? "true":"false");


}

#endif


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
