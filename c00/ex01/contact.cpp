#include "contact.hpp"
#include <cctype>

/*
    std::string first_name;
    std::string last_name;
    std::string nick;
    std::string phone_num;
    std::string darksecret;
*/
Contact::Contact()
{
}

Contact::~Contact()
{
}


bool Contact::setField(std::string name, int id) {
    if (id == 0)
        first_name = name;
    else if (id == 1)
        last_name = name;
    else if (id == 2)
        nick = name;
    else if (id == 3)
    {
        for (unsigned long i = 0; i < name.length(); i++)
        {
            if (isdigit(name[i]))
                i++;
            else
                return(false);
        }
        phone_num = name;
    }
    else if (id == 4)
        darksecret = name;
    else
        return(false);
    return(true);
}

std::string Contact::getField(int id)
{
    if (id == 0)
        return(first_name);
    else if (id == 1)
        return(last_name);
    else if (id == 2)
        return(nick);
    else if (id == 3)
        return(phone_num);;
    else if (id == 4)
        return(darksecret);
    else
        return(0);
}


