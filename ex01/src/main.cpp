/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 09:56:09 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/17 09:59:24 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "../includes/iter.hpp"

int main()
{
	int			intArr[] = {42, 21, 24, 84};
	std::string strArr[] = {"Toss", "a", "coin", "to", "your", "witcher", "\nO", "valley", "of", "plenty", "!"};
	float		floatArr[] = {3.14f, 2.71f, 1.618f, 0.577f, 4.669f};

	iter(intArr, 4, print);
	std::cout << std::endl;
	std::cout << std::endl;

	iter(strArr, 11, print);
	std::cout << std::endl;
	std::cout << std::endl;

	iter(floatArr, 5, print);
	std::cout << std::endl;
}
