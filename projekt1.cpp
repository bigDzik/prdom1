#include <iostream>

using namespace std;

<<<<<<< HEAD
int silnia ( int a ){
	if ( a > 1 )
		return a*silnia(a-1);
	else
		return 1;
}

=======
bool czy_pierwsza(int n){
	if(n<2)
		return false;
	
	for (int i = 2; i*i<=n;i++){
		if(n%i==0)
			return false;
	}

	return true;
}


>>>>>>> ifpierwsza
int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
<<<<<<< HEAD
        cout << "1. Silnia" << endl;
	cin >> wyjscie;

	if (wyjscie == 1)
		silnia(a);
=======
	cout << "2. ifPierwsza" << endl;
        cin >> wyjscie;

	if (wyjscie == 2)
		czy_pierwsza(a);

>>>>>>> ifpierwsza
    } while(wyjscie != 0);
    return 0;
}
