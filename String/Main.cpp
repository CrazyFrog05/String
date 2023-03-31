#include <iostream>
#include <string> // Бибилиотека, позволяющая работать со строками с++


int main() {
	setlocale(LC_ALL, "Ru");
	int n;

	// Символьный массив из языка С
	/*char c_str[]{'H', 'i', '!', '\0'};
	for (int i = 0; i < 3; i++)
		std::cout << c_str[i];
	std::cout << std::endl;

	std::cout << c_str << std::endl;

	char c_str2[]{ "Hello World!" };
	std::cout << c_str2 << std::endl;*/

	// Строки С++
	/*std::string str; // Объект
	std::cout << str << std::endl; // Пустая строка
	str = " Hello World! ";
	std::cout << str << std::endl; // Вывод Hello world
	str = " Bye World!";
	std::cout << str << std::endl; // Bye world 
	str += "!!!!!! :("; // Добавление текста в конец строки
	std::cout << str << std::endl;*/

	// Ввод строки через консоль 
	/*std::cout << " Привет! Какое твое имя? \n Ввод -> ";
	std::string name;
	std::cin >> name; // ввод одного слова( до первого разделителя)
	std::cout << " Привет, " << name << "!\n";
	std::cin.ignore();
	std::cout << " А кем ты работаешь? \n Ввод -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << " Ого " << job << "? Круто\n";
	std::cout << " А сколько тебе лет? \n Ввод -> ";
	int age;
	std::cin >> age;
	std::cout << " Когда-то и мне было " << age << " лет... ";*/

	// методы Строк 
	/*std::string my_str = "Hello World!";

	// Методы length и size, Возвращающие 
	//std::cout << my_str.length() << std::endl; // 12
	//std::cout << my_str.size() << std::endl; // 12
	
	// Метод insert
	//std::cout << my_str.insert(3, "WWW") << std::endl;
	
	// Метод replace
	//std::cout << my_str.replace(3, 5, "WWW") << std::endl;

	// Метод find, возвращающий позицию первого вхождения, подстроки в строку
	//std::cout << my_str.find("lo") << std::endl;
	//std::cout << my_str.find("l", 5) << std::endl;

	// Метод rfind, возвращающий позицию последнего вхождения, подстррок в строку
	//std::cout << my_str.rfind("o") << std::endl;
	//std::cout << my_str.rfind("o", 6) << std::endl;

	//метод substr
	//std::cout << my_str.substr(4) << std::endl;
	//std::cout << my_str.substr(4,5) << std::endl;*/

	//Функции для работы со строками 
	// to_string возвращающая результат превращения числа в строку
	int num = 123;
	std::string num_str = std::to_string(num); // "123"
	num_str += '!';
	std::cout << "num_str = " << num_str << std::endl;

	// stoi возвращающая число int взятая из строки 
	num_str = "1234";
	num = std::stoi(num_str);
	num++;
	std::cout << "num = " << num << std::endl;





	return 0;
}