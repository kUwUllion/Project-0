#ifndef INC_RESSOURCEMANAGER_HPP
#define INC_RESSOURCEMANAGER_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <map>
#include <vector>



class RessourceManager
{
public:
	RessourceManager();
	~RessourceManager();

	static RessourceManager* GetInstance();
	static RessourceManager* instance;

	//Load 1 asset
	//Unload 1 asset


	//Load 1 manifest/equivalent
	//Unload 1 manifest/ equivalent

	//Clear tt les assets


private:

	//Load default ressourceList;

	//Storage for ressource
};



#endif // !INC_RESSOURCEMANAGER_HPP


// Ressource Manager v0.0.1