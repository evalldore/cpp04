/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:21:37 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/08 16:20:49 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define MAX_IDEAS 100

class Brain {
	public:
		Brain(void);
		Brain(const Brain& other);
		~Brain(void);

		const Brain &operator=(const Brain& brain);
	private:
		std::string _ideas[MAX_IDEAS];
};