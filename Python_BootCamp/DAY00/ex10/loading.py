# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    loading.py                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 10:48:23 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/10 12:07:57 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



def ft_progress(lst):
    print()

listy = range(1000)
ret = 0
for elem in ft_progress(listy):
    ret += (elem + 3) % 5
    sleep(0.01)
    print()
    print(ret)
