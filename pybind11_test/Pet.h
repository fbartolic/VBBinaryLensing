#include <stdio.h>

class Pet 
{
    public:
        Pet(const std::string) : name() { }
        void setName(const std::string) {}
        const std::string &getName() const {return name;}
    private:
        std::string name;
};

