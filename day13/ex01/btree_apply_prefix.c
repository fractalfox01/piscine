/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:05:54 by tvandivi          #+#    #+#             */
/*   Updated: 2018/11/09 15:05:56 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MY_NULL 0;

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	void	(*f)(void *);

	f = &applyf;
	f(root->item);
	btree_apply_prefix(root->left, f);
	btree_apply_prefix(root->right, f);
	return (MY_NULL);
}
