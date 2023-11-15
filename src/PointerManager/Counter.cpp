#include "Counter.h"


void Counter::reset()
{
    m_counter = 0;
}

unsigned int Counter::get()
{
    return m_counter;
}
