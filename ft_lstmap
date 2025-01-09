#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *new_lst;

        if (!lst)
                return (NULL);
        new_lst = ft_lstnew(f(lst->content));
        if (!new_lst)
                return (NULL);
        lst = lst->next;
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
