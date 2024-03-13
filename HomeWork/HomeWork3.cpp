#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	// Задание 1
	char symbol;
	int symbolcode;
	cout << "введите ваш символ: ";
	cin >> symbol;
	symbolcode = int(symbol);
	if (symbolcode >= 48 && symbolcode <= 57) cout << "это число";
	else if ((symbolcode >= 65 && symbolcode <= 90) || (symbolcode >= 97 && symbolcode <= 122)) cout << "это текст";
	switch (symbolcode)
	{
	case 33:
	case 40:
	case 41:
	case 44:
	case 45:
	case 46:
	case 58:
	case 59:
	case 63:
		cout << "знак препинания";
		break;

	default:
		cout << "другое";
		break;
	}

	// Задание 2
	float time, cash;
	cout << "введите время разговора(минуты):";
	cin >> time;
	int operyou, operhis;
	cout << "введите оператора с которго звоните 1 - МТС 2 - Билайн 3 - Мегафон:";
	cin >> operyou;
	cout << "введиет оператора на который звоните 1 - МТС 2 - Билайн 3 - Мегафон:";
	cin >> operhis;
	switch (operyou)
	{
	case 1:
		switch (operhis)
		{
		case 1:
			cout << "звонок между одинаковыми операторами составит 1 мин - 1 р" << endl;
			cash = time * 1;
			cout << "разговор составит: " << cash << " рублей";
			break;
		case 2:
		case 3:
			cout << "звонок между разными операторами составит 1 мин - 2 р" << endl;
			cash = time * 2;
			cout << "звонок по итогу составит " << cash << " рублей";
			break;

		default:
			cout << "некоректный ввод данных";
			break;
		}
	case 2:
		switch (operhis)
		{
		case 2:
			cout << "звонок между одинаковыми операторами составит 1 мин - 1 р" << endl;
			cash = time * 1;
			cout << "разговор составит: " << cash << " рублей";
			break;
		case 1:
		case 3:
			cout << "звонок между разными операторами составит 1 мин - 2 р" << endl;
			cash = time * 2;
			cout << "звонок по итогу составит " << cash << " рублей";
			break;

		default:
			cout << "некоректный ввод данных";
			break;
		}
	case 3:
		switch (operhis)
		{
		case 3:
			cout << "звонок между одинаковыми операторами составит 1 мин - 1 р" << endl;
			cash = time * 1;
			cout << "разговор составит: " << cash << " рублей";
			break;
		case 1:
		case 2:
			cout << "звонок между разными операторами составит 1 мин - 2 р" << endl;
			cash = time * 2;
			cout << "звонок по итогу составит " << cash << " рублей";
			break;

		default:
			cout << "некоректный ввод данных";
			break;
		}

	default:
		cout << "некоректный ввод данных";
		break;
	}

	// Задание 3
	int income, late, countstroke, latecount;
	cout << "введите желаемый доход Васи: ";
	cin >> income;
	cout << "введите кол-во опозданий Васи: ";
	cin >> late;
	latecount = late / 3;
	cout << "введите кол-во строк: ";
	cin >> countstroke;

	cout << "должен кол-во строк: " << (float(latecount * 20 + income) / 50) * 100 << endl;

	if (((countstroke - (float(income) / 50) * 100) / 100) >= 0)
		cout << "вася может опоздать: " << (countstroke - (float(income) / 50) * 100) / 100 << endl;
	else cout << "вася уже не может опоздать!" << endl;

	if ((float(countstroke) / 100) * 50 - (latecount * 20) > 0)
		cout << "васе заплатят: " << (float(countstroke) / 100) * 50 - (latecount * 20) << " рублей";
	else cout << "вася ушел в минус,он должен: " << ((float(countstroke) / 100) * 50 - (latecount * 20)) * -1 << " рублей";
	
}