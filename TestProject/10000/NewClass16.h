#include <string>

class ClassForPerformance10000 /*This ClassForPerformance10000 should be renamed*/
{
    std::string s = "ClassForPerformance10000"; 
    std::wstring ws = L"ClassForPerformance10000";
    void ClassForPerformance10000();
    void func(ClassForPerformance10000);
    ClassForPerformance10000 var; /*This ClassForPerformance10000 variable should be renamed*/
    ClassForPerformance10000 anotherFunc(); /*This ClassForPerformance10000 as returning value should be renamed*/
};