#include "AudioPlayer.h"
#include "Renderer.h"
#include <iostream>


int main()
{
	AudioPlayer player;
	Renderer renderer;

	renderer.Callback(player.PlaySoundById);
	for (int i = 0; i < 1000; i++)
	{
		renderer.RenderFrame(i);
	}

	return 0;
}