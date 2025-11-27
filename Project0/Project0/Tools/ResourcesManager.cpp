#include "ResourcesManager.hpp"

ResourcesManager::ResourcesManager()
{

}

ResourcesManager::~ResourcesManager()
{


}

void ResourcesManager::LoadResource(std::string _path, std::string _name, ResourceType _type)
{
	if (m_resourceMap.at(_name) != NULL)
	{
		std::cout << "[WARNING]: Rewriting resource with name " << _name << std::endl;
	}

	Resource newResource;
	newResource.type = _type;

	switch (newResource.type)
	{
		case ResourceType::TEXTURE:
		{
			sf::Texture newTexture(_path);
			newResource.resource = std::make_shared<void>(newTexture);
		}
			break;


		case ResourceType::IMAGE:
			break;

		case ResourceType::SOUNDBUFFER:
			break;

		case ResourceType::FONT:
			break;

	default:
		break;
	}

	m_resourceMap.insert(std::pair<std::string, std::shared_ptr<Resource>>(_name, std::make_shared<Resource>(newResource)));
}


void* ResourcesManager::GetResource(std::string _name)
{
	if (m_resourceMap.at(_name) != NULL)
	{
		std::cout << "[WARNING]: Trying to acces resource not created with the name" << _name << std::endl;
		//retourner la version par defaut de la ressource
		return NULL;
	}


	return m_resourceMap.at(_name)->resource.get();

}


	// ResourcesManager v0.0.1