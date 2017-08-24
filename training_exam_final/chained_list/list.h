/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_h.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:11:09 by amarec            #+#    #+#             */
/*   Updated: 2017/08/24 18:11:11 by amarec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _list_h_
# define _list_h_

typedef struct s_list t_list;

typedef struct  s_list
{
  struct s_list *next;
  void *data;
}               t_list;

#endif
