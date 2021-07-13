/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:54:24 by abiari            #+#    #+#             */
/*   Updated: 2021/07/13 10:54:48 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{

	public:

		Karen();
		~Karen();
		void	complain( std::string level );

	private:

		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
};

typedef	void	(Karen::*KarenFisher)(void);
enum	level {debug, info, warning, error, notImportant};
#endif /* *********************************************************** KAREN_H */
