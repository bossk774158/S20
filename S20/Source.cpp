#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
float solution_1(float u, float v, float a, float t)
{
	v = u + (a * t);
	return v;
}
float solution_1_1(float u, float v, float a, float t)
{
	u = v - (a * t);
	return u;
}
float solution_1_2(float u, float v, float a, float t)
{
	t = (v - u) / a;
	return t;
}
float solution_1_3(float u, float v, float a, float t)
{
	a = (v - u) / t;
	return a;
}
float solution_2(float u, float v, float a, float t, float s)
{
	s = (u*t) + (0.5 * a * t * t);
	return s;
}
int main()
{
	float u, v, a, t, s;
	int i;
	printf("Assign 1 = v, 2 = u, 3 = t, 4 = a, 5 = s");
	printf("\nEnter the variable you want to find: ");
	scanf("%d", &i);
	if (i == 1)
	{
		printf("Enter u:");
		scanf("%f", &u);
		printf("Enter a:");
		scanf("%f", &a);
		printf("Enter t:");
		scanf("%f", &t);
		scanf("%f", &v);
		printf("%.2f", solution_1(u ,v, a, t));
		}
	else if (i == 2)
	{
		printf("Enter v:");
		scanf("%f", &v);
		printf("Enter a:");
		scanf("%f", &a);
		printf("Enter t:");
		scanf("%f", &t);
		scanf("%f", &u);
		printf("%.2f", solution_1_1(u, v, a, t));
	}
	else if (i == 3)
	{
		printf("Enter v:");
		scanf("%f", &v);
		printf("Enter a:");
		scanf("%f", &a);
		printf("Enter u:");
		scanf("%f", &u);
		scanf("%f", &t);
		if (v < u)
		{
			printf("Can not find the value");
		}
		else
		{
			printf("%.2f", solution_1_2(u, v, a, t));
		}
	}
	else if (i == 4)
	{
		printf("Enter v:");
		scanf("%f", &v);
		printf("Enter t:");
		scanf("%f", &t);
		printf("Enter u:");
		scanf("%f", &u);
		scanf("%f", &a);
		printf("%.2f", solution_1_3(u, v, a, t));
	}
	else if (i == 5)
	{
		printf("Enter v:");
		scanf("%f", &v);
		printf("Enter a:");
		scanf("%f", &a);
		printf("Enter u:");
		scanf("%f", &u);
		printf("Enter t:");
		scanf("%f", &t);
		scanf("%f", &s);
		if (u < 0)
		{
			printf("Can not find the value");
		}
		else
		{
			printf("%.2f", solution_2(u, v, a, t, s));
		}
	}
	return 0;
}