#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");

	double aqua = 1488;
	double* sixseven = new double(6767);
	std::cout << "Первое значение: " << aqua << " её адрес: " << &aqua << std::endl;
	std::cout << "Второе значение: " << *sixseven << " её адрес: " << sixseven << std::endl;

	double* abrikos = &aqua;
	std::cout << "Значение до изменения: " << *abrikos << std::endl;
	*abrikos = 5269;
	std::cout << "Значение после изменения: " << *abrikos << std::endl;
	std::cout << "Значение первой переменной: " << aqua << std::endl;

	double** ykazatel = &abrikos;
	std::cout << "Первый: " << abrikos << std::endl;
	std::cout << "Второй: " << ykazatel << std::endl;
	std::cout << "Значение указателя: " << **ykazatel << std::endl;

	abrikos = sixseven;
	std::cout << "Первый перенаправленный: " << abrikos << std::endl;
	std::cout << "Второй перенаправленный: " << ykazatel << std::endl;
	std::cout << "Значение указателя перенапрвленого" << **ykazatel << std::endl;

	delete sixseven;
	sixseven = nullptr;
	std::cout << "После удаления первый: " << sixseven << std::endl;//после удаления значение его 0000000000000
	sixseven = new double(1);
	std::cout << "Адрес первого: " << sixseven << " Значение его: " << *sixseven << std::endl;
}
//1)Указатель это переменная которая харанит адрес другой переменой в пямяти.
//2)& он берет адрес переменной, * ну это умножение), а так этот унарный оператор выводит/дает значение.
//3)первое это обьявление переменой указателем и присваивает ей адрес, а второе это то что записает в этом адресе значение 10.
//4)ссылка идет к сущесвующей переменной и ее нельзя перенаправлять, а указатель это отдельная переменая которая хранит адрес другой переменой и ее можно перенапрвлять.
//5)чтобы показать что указатель свободный и он не занят переменной.