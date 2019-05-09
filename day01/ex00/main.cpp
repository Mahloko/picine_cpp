#include "Pony.hpp"

void    ponyOnTheStack()
{
    Pony const obj = Pony("Chester");

    std::cout << "stack memory" << std::endl;
    return ;
}

void    ponyOntheHeap()
{
    Pony *obj = new Pony("Millie");

    std::cout << "heap memory" << std::endl;
    delete obj;
    return ;
}

int     main()
{
    std::cout << "------------- HEAP  MEMORY -------------" << std::endl;
    ponyOnTheStack();
    std::cout << std::endl << "---------- END OF STACK MEMORY ----------" << std::endl;

    std::cout << "------------- HEAP  MEMORY -------------" << std::endl;
    ponyOntheHeap();
    std::cout << std::endl << "---------- END OF HEAP MEMORY ----------" << std::endl;
    return (0);
}