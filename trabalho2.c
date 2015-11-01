#include <stdio.h>

int main()
    {
	int x,y;
	int h = 0;
	int l = 0;
	char caractere;
	char choice;
	int end = 0;
	
		while (end == 0)
		{
			printf ("Insira Largura:");
			scanf ("%d", &l);
			
			printf ("Insira Altura:");
			scanf ("%d", &h);
			
			printf ("\nInsira o Caractere que será impresso:");
			scanf (" %c", &caractere);
			
			printf ("Olá, meu nome é André e o seu retângulo ficou assim:\n");
			
			for (x = 0; x < h; x++)
			{	
			    for(y = 0; y < l; y++)
				{ 
				    if (x == 0 || x == h - 1 || y == 0 || y == l - 1)
					{ 
					    printf("%c",caractere);	
					    
					}
					else
					{
						printf (" ");
					}
				}
			printf ("\n");
			}
		
		printf ("Deseja continuar (S/n)?");
		
		scanf (" %c",&choice);
		
		if (choice == 'n')
		
			{
				end= 1;
			}
		}
		return 0;
	}
