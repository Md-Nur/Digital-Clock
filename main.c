/*             Digital Colock project 1.0.1           */

// Use __TIME__ time use korle ar manually time nite hobe na atuo time genetare hoeb scanf er poriborte __TIME__ use korte hobe next update e try for stop watch

#include <stdio.h>
// #include <math.h>
// #include <string.h>
#include <stdlib.h>
// #include <time.h>
#include <windows.h>

void main()
{
	int h, m, s;
	printf("+-+-+-+-+-+-+-+-+ Digital Clock +-+-+-+-+-+-+-+-\nSet time: ");
	scanf("%d %d %d", &h, &m, &s);
	if (h > 12 || m > 60 || s > 60)
	{
		printf("ERROR !. Please type a acceptable value of time\n");
		exit(0);
	}

	while (1)
	{
		s++;
		if (s > 60)
		{
			m++;
			s = 0;
		}
		if (m > 60)
		{
			h++;
			m = 0;
		}
		if (h > 12)
		{
			h = 0;
		}
		printf("\n+-+-+-+-+-+-+-+-+ Digital Clock +-+-+-+-+-+-+-+-\n");
		printf("%d : %d : %d", h, m, s);
		Sleep(1000);
		system("cls");
	}
}