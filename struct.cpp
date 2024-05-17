#include<iostream>
using namespace std;

struct employee
    {
        /* data */
        int eid;
        char favchar;
        float salary;
    };
int main(){
    
    struct employee pk;
    pk.eid = 1;
    pk.favchar = 'c';
    pk.salary = 12.50000000;
    cout<<"Emp Id is: "<<pk.eid<<endl;
    return 0;
}