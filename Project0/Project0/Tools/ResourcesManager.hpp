#ifndef INC_RESSOURCEMANAGER_HPP
#define INC_RESSOURCEMANAGER_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <map>
#include <vector>
#include <fstream>

#include "json/json.h"



class ResourcesManager
{
public:
	enum ResourceType
	{
		UNKNOWN = -1,

		TEXTURE,
		IMAGE,
		SOUNDBUFFER,
		FONT,

		RESOURCES_TYPE
	};

	ResourcesManager(void);
	~ResourcesManager(void);

	void LoadResource(std::string _path, std::string _name, ResourceType _type);

	void* GetResource(std::string _name);



private:

	struct Resource
	{
		std::shared_ptr<void> resource;
		ResourceType type = UNKNOWN;
	};

	std::map<std::string, std::shared_ptr<Resource>> m_resourceMap;


	bool IsResourceNameAlreadyUsed(std::string _name);
	void LoadDefaultResources(void);
};



#endif // !INC_RESSOURCEMANAGER_HPP


// Ressource Manager v0.0.1
