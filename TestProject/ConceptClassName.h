#include <concepts>
#include <type_traits>

template<typename A>
concept ClassName = std::is_invocable_r_v<A>; /*This ClassName does not have to be replaced*/

template <typename T>
requires ClassName /*This ClassName does not have to be replaced*/
void doSomething(T) { }

template <typename ClassName> /*This ClassName does not have to be replaced*/
void f(ClassName);

template <typename ClassName> /*This ClassName does not have to be replaced*/
class TemplateClass; /*This ClassName does not have to be replaced*/

template <typename T> /*This ClassName does not have to be replaced*/
requires ClassName
class TemplateClass{}; /*This ClassName does not have to be replaced*/