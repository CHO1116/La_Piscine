#include "bsq.h"

void	free_map(t_map *map, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		free(map->arr[i]);
	free(map->arr);
	free(map);
}
