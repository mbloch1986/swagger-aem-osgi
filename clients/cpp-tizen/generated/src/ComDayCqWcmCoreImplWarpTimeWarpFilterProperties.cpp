#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ComDayCqWcmCoreImplWarpTimeWarpFilterProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::ComDayCqWcmCoreImplWarpTimeWarpFilterProperties()
{
	//__init();
}

ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::~ComDayCqWcmCoreImplWarpTimeWarpFilterProperties()
{
	//__cleanup();
}

void
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::__init()
{
	//filterorder = new ConfigNodePropertyString();
	//filterscope = new ConfigNodePropertyString();
}

void
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::__cleanup()
{
	//if(filterorder != NULL) {
	//
	//delete filterorder;
	//filterorder = NULL;
	//}
	//if(filterscope != NULL) {
	//
	//delete filterscope;
	//filterscope = NULL;
	//}
	//
}

void
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *filterorderKey = "filter.order";
	node = json_object_get_member(pJsonObject, filterorderKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&filterorder, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&filterorder);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *filterscopeKey = "filter.scope";
	node = json_object_get_member(pJsonObject, filterscopeKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&filterscope, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&filterscope);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::ComDayCqWcmCoreImplWarpTimeWarpFilterProperties(char* json)
{
	this->fromJson(json);
}

char*
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getFilterorder();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getFilterorder());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *filterorderKey = "filter.order";
	json_object_set_member(pJsonObject, filterorderKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getFilterscope();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getFilterscope());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *filterscopeKey = "filter.scope";
	json_object_set_member(pJsonObject, filterscopeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyString
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::getFilterorder()
{
	return filterorder;
}

void
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::setFilterorder(ConfigNodePropertyString  filterorder)
{
	this->filterorder = filterorder;
}

ConfigNodePropertyString
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::getFilterscope()
{
	return filterscope;
}

void
ComDayCqWcmCoreImplWarpTimeWarpFilterProperties::setFilterscope(ConfigNodePropertyString  filterscope)
{
	this->filterscope = filterscope;
}

