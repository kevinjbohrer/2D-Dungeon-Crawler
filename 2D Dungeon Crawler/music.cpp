#include <iostream>
#include "music.h"

Music::Music()
{
	
	if(!music.openFromFile("sound/6628825213960192.wav"))
	{
		std::cout << "the sound buffer failed to load" << std::endl;
		return;
	}
	music.setVolume(20.f);
	music.setLoop(true);

}

void Music::playMusic()
{
	music.play();
}