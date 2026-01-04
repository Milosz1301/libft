#include "libft.h"

void    ft_lstadd_back(t_list **list, t_list *new)
{
        t_list  *current;

        if (!*list)
        {
                *list = new;
                return ;
        }
        current = *list;
        while (current->next)
                current = current->next;
        current->next = new;
}
