#include "ClassNameInNamespace.h"

ClassName::ClassName ClassName::ClassName::method(ClassName c)
{
    ClassName m{c};
    return m;
}

