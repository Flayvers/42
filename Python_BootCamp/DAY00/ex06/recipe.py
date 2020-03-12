# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    recipe.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhrara <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 11:47:17 by rrhrara           #+#    #+#              #
#    Updated: 2020/03/12 11:47:56 by rrhrara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

sandwich = {}
sandwich['ingredients'] = ['ham', 'bread', 'cheese', 'tomatoes']
sandwich['meal'] = "lunch"
sandwich['prep_time'] = 10
cake = {}
cake['ingredients'] = ['flour', 'sugar', 'eggs']
cake['meal'] = "dessert"
cake['prep_time'] = 60
salad = {}
salad['ingredients'] = ['avocado', 'arugula', 'tomatoes', 'spinach']
salad['meal'] = "lunch"
salad['prep_time'] = 15
cookbook = {}
cookbook['sandwich'] = sandwich
cookbook['cake'] = cake
cookbook['salad'] = salad
"""
print(cookbook.keys())
for key, value in cookbook.items():
	print(value.keys())
for key, value in cookbook.items():
	print(value.values())
for key, value in cookbook.items():
	print(value.items())
"""
def print_recipe(name):
	print("Recipe for {}:".format(name))
	for k, v in cookbook.items():
		if name == k:
			print('Ingredients list:', v['ingredients'])
			print('To be eaten for:', v['meal'])
			print('Takes {} minutes.\n'.format(v['prep_time']))
def delete_recipe(name):
	for k, v in cookbook.items():
		if name == k:
			del(cookbook[k])
			break
	print("The recipe for {} was deleted successfully.\n".format(name))
def add_recipe(name, ingredients, meal, prep_time):
	cookbook[name] = {}
	cookbook[name]['ingredients'] = ingredients
	cookbook[name]['meal'] = meal
	cookbook[name]['prep_time'] = prep_time
	print("The recipe for {} was added successfully.\n".format(name))
def print_all():
	print("\nList of existing recipes:")
	i = 1
	for k in cookbook:
		print("{} :" .format(i), k)
		i = i + 1
while 1:
	print("Please select an option by typing the corresponding number:")
	nb = input("1. Add a recipe\n2: Delete a recipe\n3: Print a recipe\n4: Print the cookbook\n5: Quit\n")
	if nb == '1':
		name = input("\nPlease enter the new recipe's name: ")
		ingredients = [input("Great! What are the ingredients? ")]
		meal = input("OK, which meal is more suitable for this? ")
		prep_time = input("And how long does it take to cook this recipe? ")
		add_recipe(name, ingredients, meal, prep_time)
		print("\n")
		continue
	elif nb == '2':
		name = input("\nPlease enter the recipe's name you want to delete: ")
		del_recipe(name)
		print("\n")
		continue
	elif nb == '3':
		name = input("\nPlease enter the recipe's name you want to display: ")
		print_recipe(name)
		print("\n")
		continue
	elif nb == '4':
		print_all()
		print("\n")
		continue
	elif nb == '5':
		exit("\nCookbook closed. Bye!")
	else:
		print("\nThis option does not exist, please type the corresponding number.\nTo exit, enter 5.\n")
		continue

