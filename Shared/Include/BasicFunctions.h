#pragma once

#include <vector>
#include <string>
#include <fstream>
namespace C2D
{
	namespace Basics
	{
		static std::vector<char> ReadFile(std::string filePath, int mode = std::ios::in)
		{
			std::ifstream file(filePath, std::ios::ate | mode);
			if (!file.is_open()) {
				throw std::runtime_error("failed to open file");
				return std::vector<char>(0);
			}

			size_t fileSize = (size_t)file.tellg();
			std::vector<char> buffer(fileSize);

			file.seekg(0);
			file.read(buffer.data(), fileSize);

			file.close();
			return buffer;
		}
	}
}