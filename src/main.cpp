#include <iostream>
#include <products.hpp>
#include <accounting.hpp>
#include <stdutils.hpp>
#include <utility>

int main() {
	std::wcout << L"=== Contabilín ===\n\n";

	std::cout << "Ingresa tu nombre: ";
	std::wstring username;
	std::getline(std::wcin, username);

	std::wcout << "\nHola " << username << "!\n";
	std::wcout << L"Hoy vas a aprender a cómo hacer un asiento!\n\n";

	self::stdutils::pause();

	self::product::item prod = self::product::select();

	std::wcout << "Imaginemos que vendes " << prod.second << "\n";

	size_t prodPrice = self::product::randomNum(10, 100);

	std::wcout << "Cada " << prod.first << " cuesta: " << self::accounting::valToMoney(prodPrice) << "\n\n";

	self::stdutils::pause();

	size_t sold = self::product::randomNum(2, 50);

	std::wcout << "Y vendiste " << sold << " " << prod.second << "\n\n";

	size_t priceAll = prodPrice * sold;

	std::wcout << "En total, ya vendiste " << self::accounting::valToMoney(priceAll) << "!\n\n";

	self::stdutils::pause();

	std::wcout << L"A continuación, un asiento de ejemplo con los datos que acabamos de obtener es:\n";

	using namespace std::string_view_literals;

	self::accounting::list topprint;

	topprint.emplace(L"Ventas"sv, std::make_pair(priceAll, true));

	topprint.emplace(L"Caja"sv, std::make_pair(priceAll, false));

	self::accounting::pretty(topprint);

	topprint.clear();

	self::stdutils::pause();

	std::cout << "\nLa cuenta de caja se utiliza para registrar el dinero que se tiene a la mano, por ejemplo la de una caja registradora.\n\n";

	self::stdutils::pause();

	std::cout << "La cuenta de ventas se utiliza para registrar las ventas que realiza tu negocio.\n\n";

	self::stdutils::pause();

	std::cout << "En general, lo que se busca es que pase esto:\n";

	std::cout << std::left << std::setw(8) << "Caja" << "    " << std::right << std::setw(8) << "Ventas" << "\n";
	std::wcout << std::left << std::setw(8) << self::accounting::valToMoney(priceAll) << " -> " << "\n\n";

	std::cout << std::left << std::setw(8) << "Caja" << "    " << std::right << std::setw(8) << "Ventas" << "\n";
        std::wcout << std::setw(8) << "" << " -> " << std::right << std::setw(8) << self::accounting::valToMoney(priceAll) << "\n\n";

	self::stdutils::pause();

	sold = self::product::randomNum(4, 45);
                                                                        priceAll = prodPrice * sold;

	std::wcout << "\n\nAcaba de llegar una venta!\n"
		"Vendiste " << sold << " " << prod.second << "!\n\n"
		"En total obtuviste: " << self::accounting::valToMoney(priceAll) << "\n\n";

	std::wcout << L"Conociendo estos datos, serías capaz de crear tu propio asiento?\n"; 

	self::stdutils::pause();

	std::cout << "Ingresa la cuenta ";
}
