#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str, int i)
{
	static int k = 0;  // «робимо зм≥нну k статичною, щоб вона не скидалась при кожному виклику

	if (strlen(str) < 3)
		return -1;  // якщо р€док занадто короткий, повернемо -1 €к помилку

	if (i < strlen(str)) {
		if (str[i] == ',') {
			k++;
			if (k == 3) {
				return i;
			}
		}
		return Count(str, i + 1);
	}

	return -1;  // якщо немаЇ 3 ком, повернемо -1 €к помилку
}char* Change(char* dest, const char* str, char* t, int i)
{
	if (i < strlen(str) != 0)
	{
		if (str[i] == ',')
		{
			strcat(t, "**");
			return Change(dest, str, t + 2, i + 1);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Char until third coma: " << Count(str, 1) << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Modified string (param) : " << dest1 << endl;
	cout << "Modified string (result): " << dest2 << endl;
	return 0;
}