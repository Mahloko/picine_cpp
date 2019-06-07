# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 13:27:05 by mmahloko          #+#    #+#              #
#    Updated: 2019/06/04 13:27:08 by mmahloko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJ = megaphone.o

megaphone: $(OBJ)
	clang++ $(OBJ) -o megaphone

megaphone.o : $(SRC)
	clang++ -c -Wall -Wextra -Werror $(SRC)

re: fclean megaphone

clean:
	@rm megaphone.o

fclean: clean
	@rm megaphone