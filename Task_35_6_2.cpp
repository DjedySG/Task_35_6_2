// Task_35_6_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include <unordered_map>

auto uniq_check = [](const std::vector<int> foo, std::unordered_map<int,int>& boo)
{
    for (auto& doo : foo)
    {
        if (boo[doo])
            boo.insert(std::make_pair(doo, 1));
        else
            boo[doo] += 1;
    }
};

auto printXZ = [](const std::unordered_map<int, int> boo)
{
    for(auto it = boo.begin(); it != boo.end(); it ++)
    {
        if (it->second == 1)
            std::cout << it->first;
    }
};

int main()
{
    std::vector <int> arr = { 1,2,3,3,4,5,6,7,8,9 };
    std::unordered_map <int, int> checker;
    uniq_check(arr, checker);
    printXZ(checker);

}