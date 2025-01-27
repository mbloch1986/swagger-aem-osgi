#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo()
{
	//__init();
}

ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::~ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo()
{
	//__cleanup();
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::__init()
{
	//pid = std::string();
	//title = std::string();
	//description = std::string();
	//properties = new ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties();
	//bundle_location = std::string();
	//service_location = std::string();
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::__cleanup()
{
	//if(pid != NULL) {
	//
	//delete pid;
	//pid = NULL;
	//}
	//if(title != NULL) {
	//
	//delete title;
	//title = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(properties != NULL) {
	//
	//delete properties;
	//properties = NULL;
	//}
	//if(bundle_location != NULL) {
	//
	//delete bundle_location;
	//bundle_location = NULL;
	//}
	//if(service_location != NULL) {
	//
	//delete service_location;
	//service_location = NULL;
	//}
	//
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *pidKey = "pid";
	node = json_object_get_member(pJsonObject, pidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&pid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *titleKey = "title";
	node = json_object_get_member(pJsonObject, titleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&title, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *propertiesKey = "properties";
	node = json_object_get_member(pJsonObject, propertiesKey);
	if (node !=NULL) {
	

		if (isprimitive("ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties")) {
			jsonToValue(&properties, node, "ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties", "ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties");
		} else {
			
			ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties* obj = static_cast<ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties*> (&properties);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *bundle_locationKey = "bundle_location";
	node = json_object_get_member(pJsonObject, bundle_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bundle_location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_locationKey = "service_location";
	node = json_object_get_member(pJsonObject, service_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_location, node, "std::string", "");
		} else {
			
		}
	}
}

ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo(char* json)
{
	this->fromJson(json);
}

char*
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getPid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *pidKey = "pid";
	json_object_set_member(pJsonObject, pidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *titleKey = "title";
	json_object_set_member(pJsonObject, titleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties")) {
		ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties obj = getProperties();
		node = converttoJson(&obj, "ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties", "");
	}
	else {
		
		ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties obj = static_cast<ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties> (getProperties());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *propertiesKey = "properties";
	json_object_set_member(pJsonObject, propertiesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBundleLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bundle_locationKey = "bundle_location";
	json_object_set_member(pJsonObject, bundle_locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_locationKey = "service_location";
	json_object_set_member(pJsonObject, service_locationKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::getPid()
{
	return pid;
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::setPid(std::string  pid)
{
	this->pid = pid;
}

std::string
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::getTitle()
{
	return title;
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::setTitle(std::string  title)
{
	this->title = title;
}

std::string
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::getDescription()
{
	return description;
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::setDescription(std::string  description)
{
	this->description = description;
}

ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::getProperties()
{
	return properties;
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::setProperties(ComDayCqDamScene7ImplScene7ConfigurationEventListenerProperties  properties)
{
	this->properties = properties;
}

std::string
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::getBundleLocation()
{
	return bundle_location;
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::setBundleLocation(std::string  bundle_location)
{
	this->bundle_location = bundle_location;
}

std::string
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::getServiceLocation()
{
	return service_location;
}

void
ComDayCqDamScene7ImplScene7ConfigurationEventListenerInfo::setServiceLocation(std::string  service_location)
{
	this->service_location = service_location;
}


