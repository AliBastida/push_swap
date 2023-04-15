/*esta funcion me sirve para printear la lista que voy creando, el nodo anterior y el siguiente.
Gracias Sebas!!

void print_list(t_node **a, t_node **b)
{
	t_node *temp_a;
	t_node *temp_b;
	
	temp_a = *a;
	temp_b = *b;

	while(temp_a != NULL)
	{
		printf("Valor de la lista A: %d || index:%d\n", temp_a->value, temp_a->index);
		temp_a = temp_a->next;
	}
	temp_a = ft_last_list(a);
	printf("--------Prev--------\n");
	while(temp_a != NULL)
	{
		printf("Valor de la lista A del reves: %d || index: %d || length: %d\n", temp_a->value, temp_a->index, temp_a->length_list);
		temp_a = temp_a->prev;
	}
	printf("----------------------\n");

	while(temp_b != NULL)
	{
		printf("Valor de la lista B: %d || index:%d\n", temp_b->value, temp_b->index);
		temp_b = temp_b->next;
	}
	temp_b = ft_last_list(b);
	printf("--------Prev--------\n");
	while(temp_b != NULL)
	{
		printf("Valor de la lista B del reves: %d || index: %d || length: %d\n", temp_b->value, temp_b->index, temp_b->length_list);
		temp_b = temp_b->prev;
	}
	printf("----------------------\n");
}*/