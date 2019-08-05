#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties()
{
	//__init();
}

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::~ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties()
{
	//__cleanup();
}

void
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::__init()
{
	//oauthclientrevocationactive = new ConfigNodePropertyBoolean();
}

void
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::__cleanup()
{
	//if(oauthclientrevocationactive != NULL) {
	//
	//delete oauthclientrevocationactive;
	//oauthclientrevocationactive = NULL;
	//}
	//
}

void
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *oauthclientrevocationactiveKey = "oauth.client.revocation.active";
	node = json_object_get_member(pJsonObject, oauthclientrevocationactiveKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyBoolean")) {
			jsonToValue(&oauthclientrevocationactive, node, "ConfigNodePropertyBoolean", "ConfigNodePropertyBoolean");
		} else {
			
			ConfigNodePropertyBoolean* obj = static_cast<ConfigNodePropertyBoolean*> (&oauthclientrevocationactive);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties(char* json)
{
	this->fromJson(json);
}

char*
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyBoolean")) {
		ConfigNodePropertyBoolean obj = getOauthclientrevocationactive();
		node = converttoJson(&obj, "ConfigNodePropertyBoolean", "");
	}
	else {
		
		ConfigNodePropertyBoolean obj = static_cast<ConfigNodePropertyBoolean> (getOauthclientrevocationactive());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *oauthclientrevocationactiveKey = "oauth.client.revocation.active";
	json_object_set_member(pJsonObject, oauthclientrevocationactiveKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyBoolean
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::getOauthclientrevocationactive()
{
	return oauthclientrevocationactive;
}

void
ComAdobeGraniteOauthServerImplOAuth2ClientRevocationServletProperties::setOauthclientrevocationactive(ConfigNodePropertyBoolean  oauthclientrevocationactive)
{
	this->oauthclientrevocationactive = oauthclientrevocationactive;
}

