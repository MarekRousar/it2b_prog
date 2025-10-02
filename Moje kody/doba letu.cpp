#include<stdio.h>

int main() {
	

	int cas_h;
	int cas_m;
	int draha;
	int rychlost;

	printf("Zadej hodinu odletu: ");
	scanf_s("%d", &cas_h);
	printf("Zadej minuty odletu: ");
	scanf_s("%d", &cas_m);
	printf("Zadej drahu letu v km: ");
	scanf_s("%d", &draha);
	printf("Zadej rychlost letu v km/h: ");
	scanf_s("%d", &rychlost);

	float doba_letu;
	int doba_letu_m;
	float doba_letu_final_m;
	
	doba_letu = (float) draha/rychlost;
	doba_letu_m = doba_letu * 60;
	doba_letu_final_m = doba_letu_m % 60;

	printf("%d, %.2f\n", doba_letu_m, doba_letu_final_m);

	int doba_letu_v_h = (doba_letu_m - doba_letu_final_m)/60;

	printf("%d", doba_letu_v_h);

	int doba_priletu_h = cas_h + doba_letu_v_h;
	int doba_priletu_m = cas_m + doba_letu_final_m;

	return 0;
}