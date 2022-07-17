#include <stdio.h>
void	ft_possible_combinations(int n);
​
​
int ft_check_fila (char array[]){
	int cont1 = 0; 
	int cont4 = 0;
	int num_valido = 1;
	for (int i = 0; i < 4; i++)
	{
		if (array[i] == '1')
			cont1 += 1;
		if (array[i] == '4')
			cont4 += 1;
		if (array[i] > '4' || array[i] < '1')
			num_valido = 0;
	}
	if(cont1 != 1 || cont4 > 1 || !num_valido)
		return 0;
	return 1;
}
​
​
int main(){
​
	int longitud = 4;
	int	se_resuelve = 1;
	char entrada[4][4] = {"4321", "1222", "4321", "1222"}; //orden: arriba, abajo, izquierda, derecha
​
	for (int i = 0; i < longitud; i++)
		se_resuelve *= ft_check_fila(entrada[i]);
​
	/*El resto de comprobaciones aquí (las de la pizarra y pdf*/
	if(!se_resuelve)
	{
		printf("Error\n");
		return 0;
	}
}