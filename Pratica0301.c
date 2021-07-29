#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float mI, mF;
	int tM, tH, tS=0, tTS;
	
	scanf("%f", &mI);
	mF = mI;
	
	while (mF >= 0.5){
		tS += 50;
		mF /= 2;
	}
	tH = tS/3600;
	tM = tS/60;
	tTS = tS%60;
	
printf("Massa Inicial.: %.3f gramas.\nMassa Final...: %.3f gramas.\n\nTempo Total...: %d segundos.\nTempo Horas...: %.2d:%.2d:%.2d", mI, mF, tS, tH, tM, tTS);
}

