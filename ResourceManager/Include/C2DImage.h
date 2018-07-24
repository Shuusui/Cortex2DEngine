#pragma once
#include <string>
#include "BasicFunctions.h"

const std::string g_imageExtension = "c2dimg";

namespace C2D
{
	namespace Resources
	{
		class C2DImage
		{
		private: 
			std::string m_filePath;
			const char* m_data; 
		public:
			C2DImage(const std::string& initFilePath);
		private: 
			void ConvertToInternFormat(const std::string& filePath);
			bool ExtensionCheck(const std::string& filePath);
			void ReadTexData(const std::string& filePath);
		};
	}
}