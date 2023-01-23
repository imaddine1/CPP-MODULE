#include  "Base.hpp"

int main()
{
    Base*   bp = generate();

    std::cout << "************ USING POINTER ***********\n";
    identify(bp);
    std::cout << "************ USING REFERENCE ***********\n";

    Base&   br = *(generate());
    identify(br);
    return (0);
}