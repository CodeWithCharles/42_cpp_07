/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:23:21 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/17 10:41:12 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/* -------------------------------------------------------------------------- */
/*                                Constructors                                */
/* -------------------------------------------------------------------------- */

template	<typename T>
Array<T>::Array(): data(NULL), len(0) {}

template	<typename T>
Array<T>::Array(unsigned int len): data(new T[len]), len(len) {}

template	<typename T>
Array<T>::Array(const Array &other): data(new T[other.len]), len(other.len)
{
	for (unsigned int i = 0; i < this->len; i++)
		this->data[i] = other.data[i];
}

/* -------------------------------------------------------------------------- */
/*                                 Destructors                                */
/* -------------------------------------------------------------------------- */

template	<typename T>
Array<T>::~Array()
{
	delete [] this->data;
}

/* -------------------------------------------------------------------------- */
/*                              Operator overload                             */
/* -------------------------------------------------------------------------- */

template	<typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	delete [] data;
	this->data = new T[other.len];
	this->len = other.len;
	for (unsigned int i = 0; i < this->len; i++)
		this->data[i] = other.data[i];
	return (*this);
}

template	<typename T>
T			&Array<T>::operator[](unsigned int index)
{
	if (this->len <= index)
		throw (std::out_of_range(ARR_OUT_OF_RANGE_EXCEPTION));
	return (this->data[index]);
}

template	<typename T>
const T		&Array<T>::operator[](unsigned int index) const
{
	if (this->len <= index)
		throw (std::out_of_range(ARR_OUT_OF_RANGE_EXCEPTION));
	return (this->data[index]);
}

/* -------------------------------------------------------------------------- */
/*                                  Functions                                 */
/* -------------------------------------------------------------------------- */

template		<typename T>
unsigned int	Array<T>::size() const
{
	return (this->len);
}
