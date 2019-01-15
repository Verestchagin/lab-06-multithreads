#pragma once

#include <string>
#include <thread>

class c_task
{
public:
    c_task(std::string id);
private:
    std::string generate_prototype(int length);
    std::string calc_hash(std::string &prot);
    int get_random(int minimum, int maximum);
    char get_rand_char();
    void check_hash(std::string &hash);
private:
    std::string m_id;
};
