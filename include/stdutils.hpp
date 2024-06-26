#pragma once
#include <iostream>
#include <string_view>

namespace self::stdutils {
	using namespace std::string_view_literals;

	static void pause(std::wstring_view msg = L"Continúa pulsando enter..."sv) {
		std::wcout << msg;
		std::wstring dummy;
		std::getline(std::wcin, dummy);
	}
}
