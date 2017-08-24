/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:24:12 by amarec            #+#    #+#             */
/*   Updated: 2017/08/24 18:24:14 by amarec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list  *ft_create_elem(void *data)
{
  t_list *list;
  t_list *tmp;

  list = NULL;
  tmp = malloc(sizeof(t_list));
  if(tmp)
  {
    tmp->data = data;
    tmp->next = list;
  }
}
