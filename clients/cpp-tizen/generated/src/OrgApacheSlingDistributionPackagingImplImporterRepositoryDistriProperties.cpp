#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties()
{
	//__init();
}

OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::~OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties()
{
	//__cleanup();
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::__init()
{
	//name = new ConfigNodePropertyString();
	//servicename = new ConfigNodePropertyString();
	//path = new ConfigNodePropertyString();
	//privilegename = new ConfigNodePropertyString();
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(servicename != NULL) {
	//
	//delete servicename;
	//servicename = NULL;
	//}
	//if(path != NULL) {
	//
	//delete path;
	//path = NULL;
	//}
	//if(privilegename != NULL) {
	//
	//delete privilegename;
	//privilegename = NULL;
	//}
	//
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&name, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&name);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *servicenameKey = "service.name";
	node = json_object_get_member(pJsonObject, servicenameKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&servicename, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&servicename);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *pathKey = "path";
	node = json_object_get_member(pJsonObject, pathKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&path, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&path);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *privilegenameKey = "privilege.name";
	node = json_object_get_member(pJsonObject, privilegenameKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&privilegename, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&privilegename);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties(char* json)
{
	this->fromJson(json);
}

char*
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getName();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getName());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getServicename();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getServicename());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *servicenameKey = "service.name";
	json_object_set_member(pJsonObject, servicenameKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getPath();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getPath());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *pathKey = "path";
	json_object_set_member(pJsonObject, pathKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getPrivilegename();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getPrivilegename());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *privilegenameKey = "privilege.name";
	json_object_set_member(pJsonObject, privilegenameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyString
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::getName()
{
	return name;
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::setName(ConfigNodePropertyString  name)
{
	this->name = name;
}

ConfigNodePropertyString
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::getServicename()
{
	return servicename;
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::setServicename(ConfigNodePropertyString  servicename)
{
	this->servicename = servicename;
}

ConfigNodePropertyString
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::getPath()
{
	return path;
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::setPath(ConfigNodePropertyString  path)
{
	this->path = path;
}

ConfigNodePropertyString
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::getPrivilegename()
{
	return privilegename;
}

void
OrgApacheSlingDistributionPackagingImplImporterRepositoryDistriProperties::setPrivilegename(ConfigNodePropertyString  privilegename)
{
	this->privilegename = privilegename;
}

