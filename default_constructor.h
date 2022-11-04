//
// Created by Ruijie Geng on 11/4/22.
//
#include <iostream>
#include <string>

#ifndef MODERN_CPP_LEARNING_DEFAULT_CONSTRUCTOR_H
#define MODERN_CPP_LEARNING_DEFAULT_CONSTRUCTOR_H
class computer
{
private:
//    cpu_t           m_cpu{2, 3.2_GHz};
//    ram_t           m_ram{4_GB, RAM::TYPE::DDR4};
//    hard_disk_t     m_ssd{1_TB, HDD::TYPE::SSD};
public:
    // ...
};

class Demo
{
private:

public:
    uint32_t m_var_1 = 0;
    bool m_var_2 = false;
    int m_var_3 = 0;
    float m_var_4 = 0.0;

    Demo() = default;
    Demo(uint32_t var_1, bool var_2, int var_3, float var_4)
        : m_var_1(var_1),
          m_var_2(var_2),
          m_var_3(var_3),
          m_var_4(var_4) {}
};

// You can also provide initialization at the time of declaration if members are const & static
// as above.
class X
{
    const static int m_var = 0;
};
// int X::m_var = 0; // not needed for constant static data members

#endif //MODERN_CPP_LEARNING_DEFAULT_CONSTRUCTOR_H
