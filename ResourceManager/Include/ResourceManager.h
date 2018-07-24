#pragma once
#include "BasicFunctions.h"

#include <string>
#include <map>
#include <cstdint>
#include <vector>
#include <experimental/filesystem>

namespace C2D
{
	namespace Resources
	{
		namespace stdfs = std::experimental::filesystem; 
		class ResourceManager
		{
		private: 
			std::map<uint32_t, const char*> m_resources;
			stdfs::path m_resFolderPath;
			uint32_t m_keyIndex;
		public: 
			ResourceManager(const std::string& resourceFolderPath);
			void Init();
			uint32_t AddResource(const std::vector<char>& resource, const std::string& resourceName);
			void RemoveResource(const uint32_t& key);
			const char* FindResource(const uint32_t& key);
		};
	}
}