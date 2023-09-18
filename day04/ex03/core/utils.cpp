#include "../include/MateriaSource.hpp"

void delete_materias(AMateria *m[4] , int max) {
	for (int i=0; m[i] && i<max; i++)
		delete m[i];
}

int empty_slot(AMateria *m[4]) {
	int i = 0;
	while (m[i] != NULL)
		i++;
	return i;
}

leftover *ft_lstlast(leftover *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(leftover **lst, leftover *node)
{
	leftover	*last_node;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = node;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = node;
}

void collect_materia(leftover **left, AMateria *m)
{
    leftover *tmp = new leftover;
    tmp->ptr = m;
    tmp->next = NULL;
    ft_lstadd_back(left, tmp);    
}
void delete_leftovers(leftover *l) {

	leftover* tmp;

	while (l) {
		tmp = l;
		l = l->next;
		delete tmp->ptr;
		delete tmp;
	}
}