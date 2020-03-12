# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    operations.py                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 16:34:28 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/09 17:33:00 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import sys

if len(sys.argv) < 3:
    print("Not enough argument\n")
    print("Usage: python operations.py <number1> <number2>")
    print("     Example:")
    print("python operations.py 10 3")
    exit()

elif len(sys.argv) > 3:
    print("Too many arguments\n")
    print("Usage: python operations.py <number1> <number2>")
    print("     Example:")
    print("python operations.py 10 3")
    exit()

try:
    i = int(sys.argv[1])
    j = int(sys.argv[2])

except:
    print("InputError : only numbers\n")
    print("Usage: python operations.py <number1> <number2>")
    print("     Example:")
    print("python operations.py 10 3")
    exit()

print ("sum        : {}".format(i + j))
print ("Difference : {}".format(i - j))
print ("Product    : {}".format(i * j))
if j == 0:
    print("Quotient   : ERROR (div by zero)")
    print("Remainder  : ERROR (modulo by zero)")
else : 
    print ("Quotient   : {}".format(i / j))
    print ("Remainder  : {}".format(i % j))
