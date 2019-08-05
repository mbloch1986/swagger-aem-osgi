#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties()
{
	//__init();
}

OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::~OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties()
{
	//__cleanup();
}

void
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::__init()
{
	//osgihttpwhiteboardservletpattern = new ConfigNodePropertyString();
	//osgihttpwhiteboardcontextselect = new ConfigNodePropertyString();
}

void
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::__cleanup()
{
	//if(osgihttpwhiteboardservletpattern != NULL) {
	//
	//delete osgihttpwhiteboardservletpattern;
	//osgihttpwhiteboardservletpattern = NULL;
	//}
	//if(osgihttpwhiteboardcontextselect != NULL) {
	//
	//delete osgihttpwhiteboardcontextselect;
	//osgihttpwhiteboardcontextselect = NULL;
	//}
	//
}

void
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *osgihttpwhiteboardservletpatternKey = "osgi.http.whiteboard.servlet.pattern";
	node = json_object_get_member(pJsonObject, osgihttpwhiteboardservletpatternKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&osgihttpwhiteboardservletpattern, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&osgihttpwhiteboardservletpattern);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *osgihttpwhiteboardcontextselectKey = "osgi.http.whiteboard.context.select";
	node = json_object_get_member(pJsonObject, osgihttpwhiteboardcontextselectKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&osgihttpwhiteboardcontextselect, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&osgihttpwhiteboardcontextselect);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties(char* json)
{
	this->fromJson(json);
}

char*
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getOsgihttpwhiteboardservletpattern();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getOsgihttpwhiteboardservletpattern());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *osgihttpwhiteboardservletpatternKey = "osgi.http.whiteboard.servlet.pattern";
	json_object_set_member(pJsonObject, osgihttpwhiteboardservletpatternKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getOsgihttpwhiteboardcontextselect();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getOsgihttpwhiteboardcontextselect());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *osgihttpwhiteboardcontextselectKey = "osgi.http.whiteboard.context.select";
	json_object_set_member(pJsonObject, osgihttpwhiteboardcontextselectKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyString
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::getOsgihttpwhiteboardservletpattern()
{
	return osgihttpwhiteboardservletpattern;
}

void
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::setOsgihttpwhiteboardservletpattern(ConfigNodePropertyString  osgihttpwhiteboardservletpattern)
{
	this->osgihttpwhiteboardservletpattern = osgihttpwhiteboardservletpattern;
}

ConfigNodePropertyString
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::getOsgihttpwhiteboardcontextselect()
{
	return osgihttpwhiteboardcontextselect;
}

void
OrgApacheFelixSystemreadyImplServletSystemReadyServletProperties::setOsgihttpwhiteboardcontextselect(ConfigNodePropertyString  osgihttpwhiteboardcontextselect)
{
	this->osgihttpwhiteboardcontextselect = osgihttpwhiteboardcontextselect;
}

