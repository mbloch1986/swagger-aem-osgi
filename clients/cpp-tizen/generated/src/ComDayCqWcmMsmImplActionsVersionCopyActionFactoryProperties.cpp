#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties()
{
	//__init();
}

ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::~ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties()
{
	//__cleanup();
}

void
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::__init()
{
	//cqwcmmsmactionexcludednodetypes = new ConfigNodePropertyArray();
	//cqwcmmsmactionexcludedparagraphitems = new ConfigNodePropertyArray();
	//cqwcmmsmactionexcludedprops = new ConfigNodePropertyArray();
}

void
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::__cleanup()
{
	//if(cqwcmmsmactionexcludednodetypes != NULL) {
	//
	//delete cqwcmmsmactionexcludednodetypes;
	//cqwcmmsmactionexcludednodetypes = NULL;
	//}
	//if(cqwcmmsmactionexcludedparagraphitems != NULL) {
	//
	//delete cqwcmmsmactionexcludedparagraphitems;
	//cqwcmmsmactionexcludedparagraphitems = NULL;
	//}
	//if(cqwcmmsmactionexcludedprops != NULL) {
	//
	//delete cqwcmmsmactionexcludedprops;
	//cqwcmmsmactionexcludedprops = NULL;
	//}
	//
}

void
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cqwcmmsmactionexcludednodetypesKey = "cq.wcm.msm.action.excludednodetypes";
	node = json_object_get_member(pJsonObject, cqwcmmsmactionexcludednodetypesKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyArray")) {
			jsonToValue(&cqwcmmsmactionexcludednodetypes, node, "ConfigNodePropertyArray", "ConfigNodePropertyArray");
		} else {
			
			ConfigNodePropertyArray* obj = static_cast<ConfigNodePropertyArray*> (&cqwcmmsmactionexcludednodetypes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cqwcmmsmactionexcludedparagraphitemsKey = "cq.wcm.msm.action.excludedparagraphitems";
	node = json_object_get_member(pJsonObject, cqwcmmsmactionexcludedparagraphitemsKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyArray")) {
			jsonToValue(&cqwcmmsmactionexcludedparagraphitems, node, "ConfigNodePropertyArray", "ConfigNodePropertyArray");
		} else {
			
			ConfigNodePropertyArray* obj = static_cast<ConfigNodePropertyArray*> (&cqwcmmsmactionexcludedparagraphitems);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cqwcmmsmactionexcludedpropsKey = "cq.wcm.msm.action.excludedprops";
	node = json_object_get_member(pJsonObject, cqwcmmsmactionexcludedpropsKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyArray")) {
			jsonToValue(&cqwcmmsmactionexcludedprops, node, "ConfigNodePropertyArray", "ConfigNodePropertyArray");
		} else {
			
			ConfigNodePropertyArray* obj = static_cast<ConfigNodePropertyArray*> (&cqwcmmsmactionexcludedprops);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties(char* json)
{
	this->fromJson(json);
}

char*
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyArray")) {
		ConfigNodePropertyArray obj = getCqwcmmsmactionexcludednodetypes();
		node = converttoJson(&obj, "ConfigNodePropertyArray", "");
	}
	else {
		
		ConfigNodePropertyArray obj = static_cast<ConfigNodePropertyArray> (getCqwcmmsmactionexcludednodetypes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cqwcmmsmactionexcludednodetypesKey = "cq.wcm.msm.action.excludednodetypes";
	json_object_set_member(pJsonObject, cqwcmmsmactionexcludednodetypesKey, node);
	if (isprimitive("ConfigNodePropertyArray")) {
		ConfigNodePropertyArray obj = getCqwcmmsmactionexcludedparagraphitems();
		node = converttoJson(&obj, "ConfigNodePropertyArray", "");
	}
	else {
		
		ConfigNodePropertyArray obj = static_cast<ConfigNodePropertyArray> (getCqwcmmsmactionexcludedparagraphitems());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cqwcmmsmactionexcludedparagraphitemsKey = "cq.wcm.msm.action.excludedparagraphitems";
	json_object_set_member(pJsonObject, cqwcmmsmactionexcludedparagraphitemsKey, node);
	if (isprimitive("ConfigNodePropertyArray")) {
		ConfigNodePropertyArray obj = getCqwcmmsmactionexcludedprops();
		node = converttoJson(&obj, "ConfigNodePropertyArray", "");
	}
	else {
		
		ConfigNodePropertyArray obj = static_cast<ConfigNodePropertyArray> (getCqwcmmsmactionexcludedprops());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cqwcmmsmactionexcludedpropsKey = "cq.wcm.msm.action.excludedprops";
	json_object_set_member(pJsonObject, cqwcmmsmactionexcludedpropsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyArray
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::getCqwcmmsmactionexcludednodetypes()
{
	return cqwcmmsmactionexcludednodetypes;
}

void
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::setCqwcmmsmactionexcludednodetypes(ConfigNodePropertyArray  cqwcmmsmactionexcludednodetypes)
{
	this->cqwcmmsmactionexcludednodetypes = cqwcmmsmactionexcludednodetypes;
}

ConfigNodePropertyArray
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::getCqwcmmsmactionexcludedparagraphitems()
{
	return cqwcmmsmactionexcludedparagraphitems;
}

void
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::setCqwcmmsmactionexcludedparagraphitems(ConfigNodePropertyArray  cqwcmmsmactionexcludedparagraphitems)
{
	this->cqwcmmsmactionexcludedparagraphitems = cqwcmmsmactionexcludedparagraphitems;
}

ConfigNodePropertyArray
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::getCqwcmmsmactionexcludedprops()
{
	return cqwcmmsmactionexcludedprops;
}

void
ComDayCqWcmMsmImplActionsVersionCopyActionFactoryProperties::setCqwcmmsmactionexcludedprops(ConfigNodePropertyArray  cqwcmmsmactionexcludedprops)
{
	this->cqwcmmsmactionexcludedprops = cqwcmmsmactionexcludedprops;
}

