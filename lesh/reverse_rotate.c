#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_node	*temp;
	t_node	*last;
	t_node	*second_last;

	if (!stack || !(*stack) || !(*stack)->top || !(*stack)->top->next)
		return ;

	temp = (*stack)->top;
	while (temp->next->next)
		temp = temp->next;

	second_last = temp;
	last = temp->next;

	second_last->next = NULL;
	last->next = (*stack)->top;
	(*stack)->top = last;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(&a);
	reverse_rotate(&b);
	ft_printf("rrr\n");
}

//stop!