#include <bits/stdc++.h>
using namespace std;




class Employee{
    //they are already private by default in C++
    //private:
    //protected
    public:
    //commenting the public and discarding comment from private and protected would show error in main function
    //because it makes it inaccessible
        string Name;
        string Company;
        int Age;

        void introduceYourself(){
            cout<<"Name:"<<Name<<endl;
            cout<<"Company:"<<Company<<endl;
            cout<<"Age:"<<Age<<endl;
        }
};
 
int main()
{
    Employee employee1;
    employee1.Name="Satya Nadela";
    employee1.Company="Microsoft";
    employee1.Age=46;

    employee1.introduceYourself();
    //employee1.Name
    //comment out the above line to see the error with private or protected
return 0;
}