#include "RessourceManager.hpp"

RessourceManager* RessourceManager::instance = NULL;

RessourceManager::RessourceManager()
{
}

RessourceManager::~RessourceManager()
{
	//CLear tt les ressources
}

RessourceManager* RessourceManager::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new RessourceManager();
	}
	return instance;
};




// Ressource Manager v0.0.1
