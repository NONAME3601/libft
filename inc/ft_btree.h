#ifndef FT_BTREE_H
#define FT_BTREE_H

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree 	*right;
	void			*data;
}					t_btree;

t_btree *ft_bitem_new(void *data);
void ft_binsert(t_btree **root, void *data, int (*f)(void*, void*));

#endif