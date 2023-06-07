#include<iostream>

using namespace std;

class employees{
    public:
        int id;
        string str;
        float salary;
        void print(void)
        {
            cout << this->id << endl;
            cout << this->str << endl;
            cout << this->salary << endl;
        }
};

int main(void)
{
    employees employee;
    employee.id = 8;
    employee.str = "Sameer";
    employee.salary = 5555.5;

    employee.print();
    return 0;
}