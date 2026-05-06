# push_swap

my push_swap project using the turk algorithm to sort numbers for the 1337 curriculum.

## the story
so for this project, you get two stacks and have to sort a random list of numbers. it sounds easy until you realize you can only use specific moves like push, swap, rotate, and reverse rotate. i decided to use the turk algorithm approach for this to keep things efficient. i spent a lot of time mapping out the math and handling edge cases, like making a dedicated sorting file just for lists of five or less numbers.

## the goal
the main objective was to sort the stack using the lowest possible number of moves. i built out all the core movement rulesand created specific utility functions just for the turk algorithm logic. i also went ahead and did the bonus, which meant coding a custom checker programthat uses get_next_line to read the instructions one by one and verify if the stack actually ends up sorted.

## the lesson
this project was a massive lesson in data structures and memory. it forced me to get really comfortable managing linked lists from scratch, writing my own functions to add elements to the back, get the last element, create new nodes, and check the list size. i learned that optimizing an algorithm is all about calculating the cost of a move before you actually make it.

## how to use
if you want to run it, just use the makefile to compile the project. then you execute it by passing a list of numbers like `./push_swap 5 2 9 1`. it will spit out the most efficient list of instructions to sort that list. if you want to verify it, you can compile the bonus checker and pipe the output into it to see if it works.
