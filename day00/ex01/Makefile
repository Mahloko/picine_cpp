# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 14:19:14 by mmahloko          #+#    #+#              #
#    Updated: 2019/06/05 13:49:48 by mmahloko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = Contact.class.o PhoneBook.class.o helperFunctions.o main.o

phonebook : $(OBJ)
	@clang++ $(OBJ) -o phonebook

Contact.class.o : Contact.class.cpp Contact.class.hpp
	clang++ -c -Wall -Wextra -Werror Contact.class.cpp

PhoneBook.class.o : PhoneBook.class.cpp PhoneBook.class.hpp Contact.class.hpp
	clang++ -c -Wall -Wextra -Werror PhoneBook.class.cpp

helperFunctions.o : helperFunctions.cpp Contact.class.hpp
	clang++ -c -Wall -Wextra -Werror helperFunctions.cpp

main.o : main.cpp Contact.class.hpp PhoneBook.class.hpp
	clang++ -c -Wall -Wextra -Werror main.cpp

re: fclean phonebook

clean:
	@rm $(OBJ)

fclean: clean
	@rm phonebook
