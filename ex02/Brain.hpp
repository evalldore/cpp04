/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:21:37 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/06 20:22:57 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#define MAX_IDEAS 100

class Brain {
	public:
		Brain(void);
		~Brain(void);
	private:
		std::string _ideas[MAX_IDEAS];
};