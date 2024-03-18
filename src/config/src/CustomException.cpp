/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CustomException.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 10:06:24 by kchaouki          #+#    #+#             */
/*   Updated: 2024/03/18 00:07:55 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/header.hpp"


CustomException::CustomException(const std::string& _message) : message(_message)
{
	message = "webserv: " + message;
}

CustomException::CustomException(const std::string& _message, const std::string& _arg) : message(_message)
{
	message = "webserv: [" + _arg + "] " + message;
}

const char* CustomException::what() const throw(){return (message.c_str());}
