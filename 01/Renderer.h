#pragma once
#include <functional>
//you can ONLY include standard C++ libraries
//you CANNOT include AudioPlayer or any intermediate class


class Renderer
{
public:
	Renderer();
	~Renderer();

	void RenderFrame(int frameNr);
	void SetAudioCallback(std::function<void(int)>fun);
	//void Callback(void(*fn)(int));
	//void MakeCallback(int id);

private:
	int secretNr = 42;
	std::function<void(int)> audioCallback;   //std::function can contain almost any object that acts like a function pointer in how you call it (in this case takes one int argument and returns nothing).
	//void(*callback)(int);
};