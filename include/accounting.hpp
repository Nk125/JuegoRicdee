#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>
#include <string_view>

namespace self::accounting {
	using namespace std::string_view_literals;

	using item = std::pair<size_t, bool>;

	using list = std::unordered_multimap<std::wstring_view, item>;

	static std::wstring valToMoney(size_t val) {
		using namespace std::string_literals;
                return L"$"s + std::to_wstring(val);
        }

	static void prettyHeader() {
		std::wcout << std::left << std::setw(10) << "Concepto" << std::left << std::setw(6) << "Debe" << std::right << std::setw(6) << "Haber" << "\n";
	}

	static void pretty(const list& l) {
		prettyHeader();

		for (const auto& i : l) {
			std::wcout << (i.second.second ? std::right : std::left) << std::setw(10);

			std::wcout << i.first << (i.second.second ? std::right : std::left) << std::setw(12) << valToMoney(i.second.first) << "\n";
		}
	}
}
