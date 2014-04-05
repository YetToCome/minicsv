#include "minicsv.h"
#include <iostream>

int main()
{
    csv::ifstream is("products.txt", std::ios_base::in);
    is.set_delimiter('\t');
    if(is.is_open())
    {
        Product temp;
        while(!is.eof())
        {
            is >> temp.name >> temp.qty >> temp.price;
            // display the read items
            std::cout << temp.name << "," << temp.qty << "," << temp.price << std::endl;
        }
    }
    return 0;
}