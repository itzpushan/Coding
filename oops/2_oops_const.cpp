#include <bits/stdc++.h>
using namespace std;




class Employee{
    public:
        string Name;
        string Company;
        int Age;

        void introduceYourself(){
            cout<<"Name:"<<Name<<endl;
            cout<<"Company:"<<Company<<endl;
            cout<<"Age:"<<Age<<endl;
        }
        //constructor
        //doesn't have a return type
        //default constructor gets lost
        // has SAME NAME as the class
        Employee(string name, string company, int age){
            Name= name;
            Company= company;
            Age= age;
        }
};
 
int main()
{
    Employee employee1= Employee("Satya Nadela","Microsoft",46);
    employee1.introduceYourself();
    
return 0;
}