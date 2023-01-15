#include "Renderer.h"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

void Renderer::RenderFrame(int frameNr)
{
	if (((frameNr * secretNr) % 3) == 0)
	{
		int id = frameNr * secretNr;
		callback(id);
		// Play a sound with id = frameNr * secretNr by calling the PlaySoundById from the AudioPlayer
	}
}

void Renderer::Callback(void(*fn)(int))
{
	callback = fn;
}

void Renderer::MakeCallback(int id)
{
	callback(id);
}
