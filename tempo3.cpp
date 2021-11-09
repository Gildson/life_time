#include <time.h>       /* time_t, struct tm, difftime, time, mktime */
#include <stdlib.h>
#include <iostream> 
#include <iomanip>	//setprecisio

using namespace std;

int main (){

   time_t timer;
   
   struct tm date = {0};
   double segundos;
	int dia, mes, ano;
	
	cout << "Informe a data do seu aniversário" << '\n';
	cout << "Qual a data" << '\n';
	cin >> dia;
	cout << "Qual o mes" << '\n';
	cin >> mes;
	cout << "Qual o ano" << '\n';
	cin >> ano;
	
   date.tm_year = (ano - 1900); date.tm_mon = (mes - 1); date.tm_mday = dia;
  
   timer = time( (time_t *) 0);
  
  //segundos recebe a diferença, em segundos, entre a data corrente e a data do aniversário
   segundos = difftime(timer,mktime(&date));
   
   cout << fixed << setprecision(0) << segundos << " segundos desde " << dia << "/" << mes << "/" << ano << '\n';

   return 0;
}
