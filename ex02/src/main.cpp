/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:38:05 by cpoulain          #+#    #+#             */
/*   Updated: 2025/06/17 10:41:50 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.hpp"
#include "../includes/Array.tpp"
#include <string>

int main()
{
	try
	{
		std::cout << "--- Default constructor ---" << std::endl;
		Array<int> emptyArr;
		std::cout << "Size of emptyArr: " << emptyArr.size() << std::endl;

		std::cout << "\n--- Constructor with size ---" << std::endl;
		Array<std::string> strArr(3);
		strArr[0] = "Hello";
		strArr[1] = "Array";
		strArr[2] = "Template";

		for (unsigned int i = 0; i < strArr.size(); ++i)
			std::cout << strArr[i] << std::endl;

		std::cout << "\n--- Copy constructor ---" << std::endl;
		Array<std::string> copyArr(strArr);
		copyArr[1] = "Copy!";
		for (unsigned int i = 0; i < copyArr.size(); ++i)
			std::cout << "copyArr[" << i << "] = " << copyArr[i] << std::endl;

		std::cout << "\n--- Original array after copy modified ---" << std::endl;
		for (unsigned int i = 0; i < strArr.size(); ++i)
			std::cout << "strArr[" << i << "] = " << strArr[i] << std::endl;

		std::cout << "\n--- Assignment operator ---" << std::endl;
		Array<std::string> assignArr;
		assignArr = strArr;
		assignArr[0] = "Assigned!";
		for (unsigned int i = 0; i < assignArr.size(); ++i)
			std::cout << "assignArr[" << i << "] = " << assignArr[i] << std::endl;

		std::cout << "\n--- Access out of bounds ---" << std::endl;
		std::cout << strArr[42] << std::endl; // should throw
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}
}
