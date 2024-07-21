#include <iostream>
#include <string>
using namespace std;

//TO DO: split this method.
bool isCorrectSnils(string snils)
{
	bool result = true;

	//Remove "-" and spacebars
	snils.erase(std::remove(snils.begin(), snils.end(), '-'), snils.end());
	snils.erase(std::remove(snils.begin(), snils.end(), ' '), snils.end());

	//digit validation
	if (snils.find_first_not_of("0123456789") != string::npos)
	{
		return false;
	}

	long long s = stoll(snils);

	//length validation
	if (snils.length() == 11)
	
		//loop to check dublicats
		for (int i = 0; i < 7; i++)
		{
			if (int(snils[i] - '0') - int(snils[i + 1] - '0') == 0)
			{
				if (int(snils[i] - '0') - int(snils[i + 2] - '0') == 0)
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
				controlSum += int(snils[9 - i] - '0') * i;
			}
			int controlNum = s % 100;
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
	else { result = false; }
	return result;
}

int main()
{
	system("chcp 1251");

	string snils = "123-345-678 43";

	if (isCorrectSnils(snils))
	{
		cout << "Снилс с номером: " << snils << " КОРРЕКТНЫЙ";
	}
	else
	{
		cout << "Снилс с номером: " << snils << " НЕ КОРРЕКТНЫЙ";
	}

}