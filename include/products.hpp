#pragma once
#include <vector>
#include <random>
#include <string_view>

namespace self::product {
	using namespace std::string_view_literals;

	using item = std::pair<std::wstring_view, std::wstring_view>;

	static const std::vector<item> plist = {
		{L"libro"sv, L"libros"sv},
		{L"plumón"sv, L"plumones"sv},
		{L"cuaderno"sv, L"cuadernos"sv},
		{L"lapiz"sv, L"lápices"sv}
	};

	static size_t randomNum(size_t min, size_t max) {
		std::random_device rd;
		std::mt19937_64 mt(rd());
		std::uniform_int_distribution<size_t> uid(min, max);

		return uid(mt);
	}

	static item select() {
		return plist.at(randomNum(0, plist.size() - 1));
	}
}
