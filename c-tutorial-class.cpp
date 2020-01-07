//https://www.hackerrank.com/challenges/c-tutorial-class/problem

#include <iostream>
#include <sstream>
#include <string>
using namespace std;


class Student{
    private:
        int age,standart;
        string first_name,last_name;
    public:
        void set_age(int x){this->age=x;}
        int get_age(){return this->age;}
        void set_standard(int y){this->standart=y;}
        int get_standard(){return this->standart;}
        void set_first_name(string k){this->first_name=k;}
        string get_first_name(){return this->first_name;}
        void set_last_name(string l){this->last_name=l;}
        string get_last_name(){return this->last_name;}
    string to_string(){
        stringstream m;
        m<<age<<","<<first_name<<","<<last_name<<","<<standart;
        return m.str();
    }

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}