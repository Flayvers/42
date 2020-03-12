# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count.py                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 14:25:54 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/09 16:52:46 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import string

def text_analyzer(*args):
    
    """Useless doc :)"""


    if len(args) > 1:
        print("ERROR")
        exit()
    elif len(args) == 0:
        text = input('What is the text to analyse ?')
    else:
        text = args[0]

    j = 0

    for i in text: 
        if i in string.punctuation:
            j += 1

    print ("The text contains {} characters :" .format(len(text)))
    print ("- {} : upper letters".format(sum(1 for c in text if c.isupper())))
    print ("- {} : lower letters".format(sum(1 for c in text if c.islower())))
    print ("- {} : punctuation marks".format(j))
    print ("- {} : spaces".format(sum(1 for c in text if c.isspace())))
