//
// Created by Radu Scortescu on 15.11.2023.
//

#ifndef PAOO_TEMA_II_COUNTER_H
#define PAOO_TEMA_II_COUNTER_H

#include <iostream>
using namespace std;

// Class representing a reference counter class
class Counter
{
public:
    // Constructor
    Counter() : m_counter(0){};

    Counter(const Counter&) = delete;
    Counter& operator=(const Counter&) = delete;

    // Destructor
    ~Counter() {}

    void reset();

    unsigned int get();

    // Overload post/pre increment
    void operator++()
    {
        m_counter++;
    }

    void operator++(int)
    {
        m_counter++;
    }

    // Overload post/pre decrement
    void operator--()
    {
        m_counter--;
    }
    void operator--(int)
    {
        m_counter--;
    }
    // Overloading << operator
    // friend function has the authority to access all
    // protected and private members of the class
    friend ostream& operator<<(ostream& os,
                               const Counter& counter)
    {
        os << "Counter Value : " << counter.m_counter
           << endl;
        return os;
    }

private:
    unsigned int m_counter{};
};


#endif //PAOO_TEMA_II_COUNTER_H
