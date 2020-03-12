# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    guess.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 18:59:27 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/09 19:23:56 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import random

n = random.randint(0, 100)
t = 0

while True:
    t += 1;
    a = input("\nWhat\'s your guess between 1 and 100 ?\n")
    if a.isnumeric() == False:
        print('\nWell, that\'s not a number')
    elif int(a) > 100:
        print('\nLook like it\'s over 100 --\'')
    elif int(a) < 0:
        print ('\nWhat don\'t you understand un \"between 0 and 100\" ?')
    elif int (a) > n:
        print ('\nToo high !')
    elif int(a) < n:
        print ('\nToo Low !')
    else:
        break
if t == 1:
    print('\nFirst try ? really ? lucker...')
else:
    print('\nYou finally won in {} attempts !'.format(t))
