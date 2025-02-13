#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    // map<string, int> m;

    // m["tv"] = 50;
    // m["laptop"] = 100;
    // m["headphones"] = 50;
    // m["tablet"] = 120;
    // m["watch"] = 50;

    // Uncomment the code below if you want to test additional operations.

    // m.insert({"camera", 25});
    // m.emplace("camera", 25);
    // m.erase("tv");

    // if (m.find("laptop") != m.end())
    // {
    //     cout << "found\n";
    // }
    // else
    // {
    //     cout << "not found\n";
    // }

    // for (auto p : m)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    // cout << "count :" << m.count("laptop") << endl;

    // multimap example can go here if needed

    // multimap
    // multimap<string, int> m;
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);
    // m.emplace("tv", 100);

    // // m.erase("tv");
    // m.erase(m.find("tv")); // delete only one instance

    // for (auto p : m)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }

    unordered_map<string, int> u;

    u.emplace("tv", 100);
    u.emplace("laptop", 100);
    u.emplace("fridge", 100);
    u.emplace("watch", 100);
    for (auto p : u)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}
