#include <string>

class ClassForPerformance1000 /*This ClassForPerformance1000 should be renamed*/
{
    std::string s = "ClassForPerformance1000"; 
    std::wstring ws = L"ClassForPerformance1000";
    void ClassForPerformance1000();
    void func(ClassForPerformance1000);
    ClassForPerformance1000 var; /*This ClassForPerformance1000 variable should be renamed*/
    ClassForPerformance1000 anotherFunc(); /*This ClassForPerformance1000 as returning value should be renamed*/
};