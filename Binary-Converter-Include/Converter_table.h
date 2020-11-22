#pragma once
#include <string>
using namespace std;
namespace std {
	/*
	Type of conversion
	*/
	static enum TYPE {
		ASCII_TO_BINARY,
		ASCII_TO_HEX,
		BINARY_TO_ASCII,
		BINARY_TO_HEX,
		HEX_TO_ASCII,
		HEX_TO_BINARY
	};

	class Converter {
	public:
		/*
		Main Converter Function
		std::TYPE::{type} is the type of conversion
		after you define the type of conversion, pass the input string.
		*/
		static string CONVERT(TYPE type, //Type of conversion
			string input_str //String of text that will be converted
		);
	};
	class Convert {

	public:
		static string ASCII_TO_BIN(char input);

		static char BIN_TO_ASCII(string inp);		

		static string HEX_TO_BINARY(char inp);

		static char BINARY_TO_HEX(string inp);
	};
}