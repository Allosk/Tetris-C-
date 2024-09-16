#ifndef RENDERER_H
#define RENDERER_H

#include "SDL_ttf.h"

class Texture;

// SDL forward
struct SDL_Window;
struct SDL_Renderer;

class Renderer
{
public:

	Renderer( SDL_Window& window, unsigned int logicalWidth, unsigned int logicalHeight );
	~Renderer();

	void			Clear();
	void			Present();

	unsigned int	GetLogicalWidth() const		{ return m_logicalWidth; }
	unsigned int	GetLogicalHeight() const	{ return m_logicalHeight; }

	void			DrawRect( int x, int y, int w, int h, uint32_t rgba = 0xffffffff );
	void			DrawSolidRect( int x, int y, int w, int h, uint32_t rgba = 0xffffffff );
	void			DrawText( const char* text, int x, int y, uint32_t rgba = 0xffffffff );

private:

	unsigned int	m_logicalWidth;
	unsigned int	m_logicalHeight;

	SDL_Renderer*	m_pSdlRenderer;

	TTF_Font*		m_pFont;
};

#endif // RENDERER_H
