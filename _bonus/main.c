/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snunez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 11:54:45 by snunez            #+#    #+#             */
/*   Updated: 2021/02/19 13:25:41 by snunez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void paquetillo(void *algo)
{
	printf("este es el puntero que se va a borrar:%p\n", algo);
	printf("este es el puntero que se va a borrar:%s\n", algo);

}
int		main()
{
	t_list *L3 = ft_lstnew((void *)"tal");
	t_list *L2 = ft_lstnew((void *)"que");
	t_list *L1 = ft_lstnew((void *)"hola");
	t_list *L4 = ft_lstnew((void *)"paquete");

	L1->next = L2;
	L2->next = L3;
	printf("%s\n", L1->content);
	ft_lstadd_front(&L1, L4);
	printf("%s\n", L1->content);
	printf("%s\n", L1->next->content);
	printf("%s\n", L2->content);
	printf("%s\n", L3->content);
	printf("%p\n", L3->next);
	printf("%d\n", ft_lstsize(L1));
	printf("%s\n", ft_lstlast(L1)->content);
	//ft_lstdelone(L4, paquetillo);
	//printf("%s\n", L4->content);
	//ft_lstclear(&L2, paquetillo);
}
