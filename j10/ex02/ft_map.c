/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 22:18:54 by amarec            #+#    #+#             */
/*   Updated: 2017/08/23 22:18:56 by amarec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_map(int *tab, int length, int(*f)(int))
{
  tab = malloc(sizeof(*tab) * lenght);

  while(index < length)
  {
    tab[index] = f(tab[index]);
    index++;
  }
  return (tab);
}
