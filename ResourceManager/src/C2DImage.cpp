#include "../Include/C2DImage.h"
#define STB_IMAGE_IMPLEMENTATION
#include "../extern/include/stb_image/stb_image.h"


C2D::Resources::C2DImage::C2DImage(const std::string& initFilePath)
	:m_filePath(initFilePath)
{
	if (!ExtensionCheck(initFilePath))
	{
		ConvertToInternFormat(initFilePath);
	}
}

void C2D::Resources::C2DImage::ConvertToInternFormat(const std::string& filePath)
{
	ReadTexData(filePath);
}

bool C2D::Resources::C2DImage::ExtensionCheck(const std::string & filePath)
{
	bool isExtension = false;
	std::string extension;
	for (char c : filePath)
	{
		if (c == '.')
		{
			if (isExtension)
			{
				extension.clear();
			}
			isExtension = true;
		}
		if (isExtension)
		{
			extension.push_back(c);
		}
	}
	return (extension == g_imageExtension);
	
}

void C2D::Resources::C2DImage::ReadTexData(const std::string & filePath)
{
	int texWidth, texHeight, texChannels; 
	stbi_uc* pixels = stbi_load(filePath.c_str(), &texWidth, &texHeight, &texChannels, STBI_rgb_alpha);
	
}
