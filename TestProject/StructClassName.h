#pragma once
#include <string>

struct ClassName /*This ClassName does not have to be replaced*/
{
    ClassName doSomething();
};

namespace n
{
    struct SomeClass /*This SomeClass does not have to be replaced*/
    {
        std::string s = "SomeClass";
    };
}

namespace GroupByMember
{
    class GroupClass /*GroupClass*/
    {
        std::string s = "GroupClass";
        std::wstring ws = L"GroupClass";
        GroupClass f();
    };
}

namespace ns
{
    class ClassName{};
}
