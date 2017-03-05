#ifndef RPN_CALC_H
# define RPN_CALC_H

# include <stdio.h>
# include <stdlib.h>


typedef struct		s_rpn
{
	int		data;
	int		type;
	struct s_rpn	*next;
	struct s_rpn	*prev;
}			t_rpn;

#endif
