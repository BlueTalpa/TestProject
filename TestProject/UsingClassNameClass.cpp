#include "UsingClassNameClass.h"

#include <algorithm>
#include <vector>

#include "ClassName.h" /*This ClassName does not have to be replaced*/

ClassName somethingUseful(ClassName c) /*This ClassName has to be replaced*/
{
    std::vector<ClassName> v;
    std::max<ClassName>(ClassName{}, ClassName{});
    return c;
}

ClassName somethingUseless() /*This ClassName has to be replaced*/
{
    ClassName c; /*This ClassName has to be replaced*/
    return c;
}

void anotherMethod(ClassName c) /*This ClassName has to be replaced*/
{
    ClassName cc{std::move(c)}; /*This ClassName has to be replaced*/
}

void oneMore(ClassName c) /*This ClassName has to be replaced*/
{
    ClassName::classMethod();
    c.anotherOne();
}