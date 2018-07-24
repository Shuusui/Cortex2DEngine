#include "../Include/ResourceManager.h"

C2D::Resources::ResourceManager::ResourceManager(const std::string & resourceFolderPath)
	:m_resFolderPath(resourceFolderPath)
{
}

void C2D::Resources::ResourceManager::Init()
{
	const stdfs::directory_iterator end{};
	for (stdfs::directory_iterator iter{m_resFolderPath}; iter != end; ++iter)
	{
		m_resources.insert(std::pair<uint32_t, const char*>(m_keyIndex, C2D::Basics::ReadFile(iter->path().string(), std::ios::binary).data()));
		m_keyIndex++;
	}
}

uint32_t C2D::Resources::ResourceManager::AddResource(const std::vector<char>& resource, const std::string & resourceName)
{
	//TODO: implement algorithm for own resource writing.
	return 0;
}

void C2D::Resources::ResourceManager::RemoveResource(const uint32_t & key)
{
	m_resources.erase(key);
}

const char * C2D::Resources::ResourceManager::FindResource(const uint32_t & key)
{
	return m_resources.at(key);
}
