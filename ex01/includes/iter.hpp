/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:51:50 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/17 09:53:16 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>

template	<typename T>
void		iter(
	T *array,
	size_t len,
	void f(T &)
)
{
	for (size_t i = 0; i < len; i++) f(array[i]);
}

template	<typename T>
void		print(T &n)
{
	std::cout << n << " ";
}
