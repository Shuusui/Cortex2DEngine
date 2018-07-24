#pragma once
#include "IRenderer.h"

namespace C2D
{
	namespace Rendering
	{
		class Renderer : public IRenderer
		{
		public: 
			virtual void Init() override; 
			virtual void Render() override; 
			virtual void ShutDown() override;
		};
	}
}