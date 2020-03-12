# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    whois.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 13:16:30 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/09 14:47:58 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

if len(sys.argv) < 2:
    exit()

try:
    n = int(sys.argv[1])

except:
    print("ERROR")
    exit()

if n < 0: n = n * -1

if len(sys.argv) > 2: 
    print("ERROR")
    exit()

elif n == 0: 
    print ("I'm Zero")
    exit()

elif n % 2 == 0: 
    print ("I'm Even")
    exit()

else: 
    print ("I'm Odd")
