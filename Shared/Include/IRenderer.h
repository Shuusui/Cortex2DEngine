#pragma once




namespace C2D
{
	namespace Rendering
	{
		class IRenderer
		{
		public: 
			virtual void Init() = 0; 
			virtual void Render() = 0; 
			virtual void ShutDown() = 0;
		};
	}
}