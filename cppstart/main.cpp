#include <iostream>

class Person
{
private:
    const std::string name;
    const unsigned age;
public:
    Person(std::string p_name, unsigned p_age) : name{p_name}, age{p_age}
    {}
    void print_person(void)
    {
        std::cout << "Name : " << name << "  age:" << age << std::endl;
    }
};
int main()
{
    Person Tim{"Tim", 29};
    Tim.print_person();
}
