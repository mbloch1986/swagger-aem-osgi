#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ConfigNodePropertyDropDown.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ConfigNodePropertyDropDown::ConfigNodePropertyDropDown()
{
	//__init();
}

ConfigNodePropertyDropDown::~ConfigNodePropertyDropDown()
{
	//__cleanup();
}

void
ConfigNodePropertyDropDown::__init()
{
	//name = std::string();
	//optional = bool(false);
	//is_set = bool(false);
	//type = new ConfigNodePropertyDropDown_type();
	//value = null;
	//description = std::string();
}

void
ConfigNodePropertyDropDown::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(optional != NULL) {
	//
	//delete optional;
	//optional = NULL;
	//}
	//if(is_set != NULL) {
	//
	//delete is_set;
	//is_set = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//
}

void
ConfigNodePropertyDropDown::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *optionalKey = "optional";
	node = json_object_get_member(pJsonObject, optionalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&optional, node, "bool", "");
		} else {
			
		}
	}
	const gchar *is_setKey = "is_set";
	node = json_object_get_member(pJsonObject, is_setKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&is_set, node, "bool", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyDropDown_type")) {
			jsonToValue(&type, node, "ConfigNodePropertyDropDown_type", "ConfigNodePropertyDropDown_type");
		} else {
			
			ConfigNodePropertyDropDown_type* obj = static_cast<ConfigNodePropertyDropDown_type*> (&type);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&value);
			obj->fromJson(json_to_string(node, false));
			
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
}

ConfigNodePropertyDropDown::ConfigNodePropertyDropDown(char* json)
{
	this->fromJson(json);
}

char*
ConfigNodePropertyDropDown::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getOptional();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *optionalKey = "optional";
	json_object_set_member(pJsonObject, optionalKey, node);
	if (isprimitive("bool")) {
		bool obj = getIsSet();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *is_setKey = "is_set";
	json_object_set_member(pJsonObject, is_setKey, node);
	if (isprimitive("ConfigNodePropertyDropDown_type")) {
		ConfigNodePropertyDropDown_type obj = getType();
		node = converttoJson(&obj, "ConfigNodePropertyDropDown_type", "");
	}
	else {
		
		ConfigNodePropertyDropDown_type obj = static_cast<ConfigNodePropertyDropDown_type> (getType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getValue());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ConfigNodePropertyDropDown::getName()
{
	return name;
}

void
ConfigNodePropertyDropDown::setName(std::string  name)
{
	this->name = name;
}

bool
ConfigNodePropertyDropDown::getOptional()
{
	return optional;
}

void
ConfigNodePropertyDropDown::setOptional(bool  optional)
{
	this->optional = optional;
}

bool
ConfigNodePropertyDropDown::getIsSet()
{
	return is_set;
}

void
ConfigNodePropertyDropDown::setIsSet(bool  is_set)
{
	this->is_set = is_set;
}

ConfigNodePropertyDropDown_type
ConfigNodePropertyDropDown::getType()
{
	return type;
}

void
ConfigNodePropertyDropDown::setType(ConfigNodePropertyDropDown_type  type)
{
	this->type = type;
}

std::string
ConfigNodePropertyDropDown::getValue()
{
	return value;
}

void
ConfigNodePropertyDropDown::setValue(std::string  value)
{
	this->value = value;
}

std::string
ConfigNodePropertyDropDown::getDescription()
{
	return description;
}

void
ConfigNodePropertyDropDown::setDescription(std::string  description)
{
	this->description = description;
}


