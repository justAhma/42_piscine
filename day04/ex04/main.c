/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 00:35:33 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/12 00:58:53 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int main(){
	int n = ft_fibonacci(12);
	printf("%i\n", n);
}