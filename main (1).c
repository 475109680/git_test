#include "mine.h"

void Menu()
{
	printf("###################################\n");
	printf("## 1. Play               2. Exit ##\n");
	printf("###################################\n");
	printf("Please Select: ");
}
int main()
{
	int a = 1;
	int b = 2;
	printf("%d\n", a&b); //0
	printf("%d\n", a|b); //3
	printf("%d\n", a^b); //3
	//int a = 10;
	//a += 10;
	//a -= 10;
	//a /= 10;
	//a *= 10;
	//a %= 10;
	//a + 10;

	//a = a % 0;
	
	/*int quit = 0;
	int select = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			Game();
			break;
		case 2:
			printf("°Ý°Ý£¡\n");
			quit = 1;
			break;
		default:
			printf("Ñ¡Ôñ´íÎó£¬ÇëÖØÐÂÑ¡Ôñ£¡\n");
			break;
		}
	}*/
	system("pause");
	return 0;
}