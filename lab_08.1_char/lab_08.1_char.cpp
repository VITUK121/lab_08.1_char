#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* s){
	int k = 0, pos = 0; // pos = позиція початку пошуку
	char* t;
	while (t = strstr(s + pos, "while")) // t = вказівник на '+'
	{
		pos = t - s + 5; // pos = наступний символ після '+'
		k++;
	}
	return k;
}

char* Change(char* s, int counter){
	char* t = new char[strlen(s) -	(counter*5) + (counter*2) + 1];
	char* p;
	int pos1 = 0; // pos1 = позиція початку пошуку
	*t = 0;

	while (p = strstr(s + pos1, "while")){ // p = вказівник на '+'
		int pos2 = p - s;
		strncat(t, s + pos1, pos2 - pos1);
		strcat(t, "**");
		pos1 = pos2 + 5;
	}

	strcat(t, s + pos1);
	strcpy(s, t);
	delete[] t;
	return s;
}

int main(){
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	int counter = Count(str);
	cout << "Counter = " << counter << endl;

	Change(str,counter);
	cout << "Result: " << str << endl;
}