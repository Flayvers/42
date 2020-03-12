# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    kata01.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 17:14:49 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/09 18:03:57 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

language = {
        'Python': 'Guido van Rossum',
        'Ruby': 'Yukihiro Matsumoto',
        'PHP': 'Rasmus Lerdorf',
        }
for c in language:
    print ("{code}: was created by{creator}".format(code=c, creator=language[c]))
