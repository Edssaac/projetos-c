#include <stdio.h>

int main(){

	double pos, x;
	int hh, mm, ss;

	while (scanf("%lf", &pos) != EOF)
	{
		x = (int)pos;
		hh = ((int)(pos * 240) / 3600) % 60;
		mm = ((int)(pos * 240) / 60) % 60;
		ss = (int)(pos * 240) % 60;

		if ( x >= 0 && x < 90 || x == 360 )	printf("Bom Dia!!\n%02d:%02d:%02d\n", (hh + 6) % 24, mm, ss);
		else if ( x >= 90 && x < 180 ) printf("Boa Tarde!!\n%02d:%02d:%02d\n", (hh + 6) % 24, mm, ss);
		else if ( x >= 180 && x < 270 ) printf("Boa Noite!!\n%02d:%02d:%02d\n", (hh + 6) % 24, mm, ss);
		else if ( x >= 270 && x < 360 )	printf("De Madrugada!!\n%02d:%02d:%02d\n", (hh + 6) % 24, mm, ss);
	}


    return 0;
}
