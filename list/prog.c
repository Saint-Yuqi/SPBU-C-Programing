#include "list.h"

int main()
{
    List l = EMPTY_LIST;

    l = l_prepend(l, 5);
    l = l_prepend(l, 4);
    l = l_prepend(l, 3);
    l = l_prepend(l, 2);
    l = l_prepend(l, 1);
    l_print(l);

    l = l_remove(l, 0);
    l_print(l);

    l = l_insert_keep_sorting(l, 3);
    l_print(l);

    l = l_append(l, 12);
    l_print(l);

    l = l_insert_to(l, -1, -2);
    l_print(l);

    l = l_insert_to(l, 103, 34);
    l_print(l);

    l = l_insert_to(l, 3, 2);
    l_print(l);

    l = l_remove(l, 9);
    l_print(l);

    // deallocate list elements one by one
    while(l)
        l = l_remove(l, 0);

    return 0;
}