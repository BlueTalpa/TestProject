#include <string>

class ClassForPerformance100 /*This ClassForPerformance100 should be renamed*/
{
    std::string s = "ClassForPerformance100"; 
    std::wstring ws = L"ClassForPerformance100";
    void ClassForPerformance100();
    void func(ClassForPerformance100);
    ClassForPerformance100 var; /*This ClassForPerformance100 variable should be renamed*/
    ClassForPerformance100 anotherFunc(); /*This ClassForPerformance100 as returning value should be renamed*/
};