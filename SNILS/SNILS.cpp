#include <iostream>
#include <string>
using namespace std;

//Split method. Add validation and conversion of the entered snils number.
static bool isCorrectSnils(long long snils)
{
	bool result = true;

	long long s = snils;
	int length = 1;
	while (s /= 10)
		length++;
	//length verification
	if (length == 11)
	{
		string stringSnils = to_string(snils);

		//loop to check dublicats
		for (int i = 0; i < 7; i++)
		{
			if (int(stringSnils[i] - '0') - int(stringSnils[i + 1] - '0') == 0)
			{
				if (int(stringSnils[i] - '0') - int(stringSnils[i + 2] - '0') == 0)
				{
					result = false;
					break;
				}
			}
		}

		if (result)
		{
			//Each digit of the SNILS is multiplied by the number of its position 
			//(the position is counted from the end), the resulting products are summed up.
			int controlSum = 0;
			for (int i = 1; i < 10; i++)
			{
				controlSum += int(stringSnils[9 - i] - '0') * i;
			}
			int controlNum = snils % 100;
			if (controlSum == 100 or controlSum == 101)
			{
				if (controlSum != 00)
				{
					result = false;
				}
			}
			else if (controlSum < 100)
			{
				if (controlSum != controlNum)
				{
					result = false;
				}
			}
			else if (controlSum > 101)
			{
				if (controlSum % 101 < 100)
				{
					if (controlNum != controlSum % 101)
					{
						result = false;
					}
				}
				else if (controlSum % 101 != 100)
				{
					result = false;
					
				}
			}
		}

	}
	else { result = false; }
	return result;
}

int main()
{
	system("chcp 1251");

	long long snils = 12334567843;

	if (isCorrectSnils(snils))
	{
		cout << "Снилс с номером: " << snils << " КОРРЕКТНЫЙ";
	}
	else
	{
		cout << "Снилс с номером: " << snils << " НЕ КОРРЕКТНЫЙ";
	}
	
}