#include <stdio.h>
#include <stdlib.h>

#define NUM

int main()
{
	int count = 5;
	

	for (int i = 0; i < count; i++)
	{
		for (int i = 0; i < count; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//int count = 0;
	//scanf("%d", &count);

	//int*kor = (int*)malloc(sizeof(int) * count);
	//int*eng = (int*)malloc(sizeof(int) * count);
	//int*math = (int*)malloc(sizeof(int) * count);
	//int*avg = (int*)malloc(sizeof(int) * count);
	//int kor[count];
	//int eng[count];
	//int math[count];
	//float avg[count];

	//for (int i = 0; i < count; i++)
	//{
		
	//	kor[i] = 100;
	//	eng[i] = 90;
	//	math[i] = 20;
	//	avg[i] = (kor[i] + eng[i] + math[i]) / 3.f;

	//	printf("%f\n", *(avg+i));
	//}

	//free(kor);
	//free(eng);
	//free(math);
	//free(avg);
	//return 0;
//}


//int main()
//{
	//int count = 0;
	//scanf("%d, &count");

	//for (int i = 0; i < count; i++)
	//{
	//	for (int j = 0; j < count; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//return 0;
//}