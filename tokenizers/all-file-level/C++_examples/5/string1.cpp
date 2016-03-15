/* The following code example is taken from the book
 * "Object-Oriented Programming in C++"
 * by Nicolai M. Josuttis, Wiley, 2002
 *
 * (C) Copyright Nicolai M. Josuttis 2002.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */
#include <iostream>    // C++ header file for I/O
#include <string>      // C++ header file for strings

int main()
{
    // create two strings
    std::string firstname = "bjarne";
    std::string lastname = "stroustrup";
    std::string name;

    // manipulate strings
    firstname[0] = 'B';
    lastname[0] = 'S';

    // chain strings
    name = firstname + " " + lastname;

    // compare strings
    if (name != "") {
        // output strings
        std::cout << name
                  << " is the founder of C++" << std::endl;
    }

    // determine number of characters in a string
    int num = name.length();
    std::cout << "\"" << name << "\" has " << num
              << " characters" << std::endl;
}

