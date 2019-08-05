#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties()
{
	//__init();
}

ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::~ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties()
{
	//__cleanup();
}

void
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::__init()
{
	//slingservletselectors = new ConfigNodePropertyString();
	//slingservletextensions = new ConfigNodePropertyString();
}

void
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::__cleanup()
{
	//if(slingservletselectors != NULL) {
	//
	//delete slingservletselectors;
	//slingservletselectors = NULL;
	//}
	//if(slingservletextensions != NULL) {
	//
	//delete slingservletextensions;
	//slingservletextensions = NULL;
	//}
	//
}

void
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *slingservletselectorsKey = "sling.servlet.selectors";
	node = json_object_get_member(pJsonObject, slingservletselectorsKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&slingservletselectors, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&slingservletselectors);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *slingservletextensionsKey = "sling.servlet.extensions";
	node = json_object_get_member(pJsonObject, slingservletextensionsKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&slingservletextensions, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&slingservletextensions);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties(char* json)
{
	this->fromJson(json);
}

char*
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getSlingservletselectors();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getSlingservletselectors());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *slingservletselectorsKey = "sling.servlet.selectors";
	json_object_set_member(pJsonObject, slingservletselectorsKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getSlingservletextensions();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getSlingservletextensions());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *slingservletextensionsKey = "sling.servlet.extensions";
	json_object_set_member(pJsonObject, slingservletextensionsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyString
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::getSlingservletselectors()
{
	return slingservletselectors;
}

void
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::setSlingservletselectors(ConfigNodePropertyString  slingservletselectors)
{
	this->slingservletselectors = slingservletselectors;
}

ConfigNodePropertyString
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::getSlingservletextensions()
{
	return slingservletextensions;
}

void
ComAdobeCqSocialFilelibraryClientEndpointsFilelibraryDownloadGeProperties::setSlingservletextensions(ConfigNodePropertyString  slingservletextensions)
{
	this->slingservletextensions = slingservletextensions;
}

