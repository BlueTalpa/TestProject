﻿#pragma once
#include "../../SecondTestProject/SecondTestProject.h"

class ClassName /*This ClassName has to be replaced*/
{
public:
    ClassName(){}; /*This ClassName has to be replaced*/
    ~ClassName(){}; /*This ClassName has to be replaced*/
    ClassName(const ClassName &) = delete; /*This ClassName has to be replaced*/
    ClassName(const ClassName &&){}; /*This ClassName has to be replaced*/
    ClassName& operator=(ClassName&& other) noexcept = delete; /*This ClassName has to be replaced*/
    ClassName& operator=(ClassName& other) noexcept = delete; /*This ClassName has to be replaced*/

    static void classMethod();
    ClassName anotherOne();
};

namespace N
{
    class SomeClass{}; /*SomeClass*/
}

namespace m
{
    class SomeClass{}; /*SomeClass*/
}