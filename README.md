# Push_swap

## Solving the problem

This project was an introduction to **sorting algorithms** and **complexity**. One of the challenges was that for this project, complexity was not measure in number of computations within the program, but in number of instructions, which makes the project very unique and challenging. It requires a good understanding of the mechanics of sorting algorithm in order to adapt them to the problem.

### Stacks and instructions

The rules the algorithm had to follow is that it can only store the number in two stacks, two arrays of int which follow the "last in, first out" principle. At the begining, the numbers given as parameters are stored in pile a. The algorithm can only use the following instructions :

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