#include "push_swap.h"

#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*last;
	t_stack	*second_last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	second_last = temp;
	last = temp->next;
	second_last->next = NULL;

	last->next = *stack;
	*stack = last;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(&a);
	reverse_rotate(&b);
	printf("rrr");
}
//stop!