/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:47:03 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/17 09:49:04 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template	<typename T>
void		swap(
	T &a,
	T &b
)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template	<typename T>
T			&min(
	T &a,
	T &b
)
{
	return (a < b ? a : b);
}

template	<typename T>
T			&max(
	T &a,
	T &b
)
{
	return (a < b ? b : a);
}
