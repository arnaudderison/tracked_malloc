#include "ft_leaks.h"

int	main(void)
{
    char *test1;
    char *test2;

	test1 = ft_malloc(5, "test1", 8);
    test2 = ft_malloc(5, "test2", 9);
    ft_putalloc();
    ft_free(test1);
    ft_putalloc();
    ft_free(test2);
    ft_putalloc();
	return (0);
}
