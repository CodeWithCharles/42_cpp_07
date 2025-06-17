/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:23:47 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/17 10:40:12 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <stdexcept>

#define ARR_OUT_OF_RANGE_EXCEPTION "Array index out of range"

template <typename T>
class Array
{
	private:
		T	*data;
		unsigned int	len;
	public:
/* ------------------------------ Constructors ------------------------------ */
		Array();
		Array(unsigned int len);
		Array(const Array &other);

/* ------------------------------- Destructors ------------------------------ */
		~Array();

/* ---------------------------- Operator overload --------------------------- */
		Array			&operator=(const Array &other);
		T				&operator[](unsigned int index);
		const T			&operator[](unsigned int index) const;

/* -------------------------------- Functions ------------------------------- */
		unsigned int	size() const;
};
