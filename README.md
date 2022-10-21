# Push_swap

## Solving the problem

This project was an introduction to **sorting algorithms** and **complexity**. One of the challenges was that for this project, complexity was not measure in number of computations within the program, but in number of instructions, which makes the project very unique and challenging. It requires a good understanding of the mechanics of sorting algorithm in order to adapt them to the problem.

### The Rules

You have 2 **stacks** named a and b

*At the beginning:*

The stack **a** contains a random amount of negative and/or positive numbers which cannot be duplicated.

The stack **b** is empty.

The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:

| Name | Effect |
|:----:|:------:|
| pa | Push the top number of stack b onto stack a |
| pb | Push the top number of stack a onto stack b |
| ra | Places the top number of stack a to the bottom of stack a |
| rb | Places the top number of stack b to the bottom of stack b |
| rr | Equivalent of ra rb |
| rra | Places the bottom number of stack a at the top of stack a |
| rrb | Places the bottom number of stack b at the top of stack b |
| rrr | Equivalent of rra rrb |
| sa | Swaps the two top numbers of stack a |
| sb | Swaps the two top numbers of stack b |
| ss | Equivalent of sa sb |

## GRADE

![plot](./index.jpeg)