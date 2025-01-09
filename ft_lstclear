#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
        t_list  *current;
        t_list  *temp;

        if (!lst || !del)
                return ;
        current = *lst;
        while (current)
        {
                temp = current;
                del(current->content);
                current = current->next;
                free(temp);
        }
        *lst = NULL;
}
