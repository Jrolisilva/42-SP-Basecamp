# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 19:31:54 by jade-oli          #+#    #+#              #
#    Updated: 2021/06/18 19:31:55 by jade-oli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig | grep ether | awk '{print$2}'