#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *new_lst;
        //t_list        *new_node;

        if (!lst || !f || !del)
                return (NULL);
        new_lst = ft_lstnew(f(lst->content));
        if (!new_lst)
                return (NULL);
        while (lst) 
        {
                ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
                if (!new_lst)
                {
                        ft_lstclear(&new_lst, del);
                        return (NULL);
                }
                lst = lst->next;
        }
        return (new_lst);
}
