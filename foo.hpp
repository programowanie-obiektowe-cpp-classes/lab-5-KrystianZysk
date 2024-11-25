#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> v;
    v.reserve(people.size());
    for(auto& people:people)
        people.birthday();

    for(auto& people:people)
        if (people.isMonster()){
            v.push_back('n');
        } else{
            v.push_back('y');
        }
    std::reverse(v.begin(), v.end());
    return v;
}
