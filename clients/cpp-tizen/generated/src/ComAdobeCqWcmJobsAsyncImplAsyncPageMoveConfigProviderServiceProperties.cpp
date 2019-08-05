#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties()
{
	//__init();
}

ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::~ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties()
{
	//__cleanup();
}

void
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::__init()
{
	//threshold = new ConfigNodePropertyInteger();
	//jobTopicName = new ConfigNodePropertyString();
	//emailEnabled = new ConfigNodePropertyBoolean();
}

void
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::__cleanup()
{
	//if(threshold != NULL) {
	//
	//delete threshold;
	//threshold = NULL;
	//}
	//if(jobTopicName != NULL) {
	//
	//delete jobTopicName;
	//jobTopicName = NULL;
	//}
	//if(emailEnabled != NULL) {
	//
	//delete emailEnabled;
	//emailEnabled = NULL;
	//}
	//
}

void
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *thresholdKey = "threshold";
	node = json_object_get_member(pJsonObject, thresholdKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyInteger")) {
			jsonToValue(&threshold, node, "ConfigNodePropertyInteger", "ConfigNodePropertyInteger");
		} else {
			
			ConfigNodePropertyInteger* obj = static_cast<ConfigNodePropertyInteger*> (&threshold);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *jobTopicNameKey = "jobTopicName";
	node = json_object_get_member(pJsonObject, jobTopicNameKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyString")) {
			jsonToValue(&jobTopicName, node, "ConfigNodePropertyString", "ConfigNodePropertyString");
		} else {
			
			ConfigNodePropertyString* obj = static_cast<ConfigNodePropertyString*> (&jobTopicName);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *emailEnabledKey = "emailEnabled";
	node = json_object_get_member(pJsonObject, emailEnabledKey);
	if (node !=NULL) {
	

		if (isprimitive("ConfigNodePropertyBoolean")) {
			jsonToValue(&emailEnabled, node, "ConfigNodePropertyBoolean", "ConfigNodePropertyBoolean");
		} else {
			
			ConfigNodePropertyBoolean* obj = static_cast<ConfigNodePropertyBoolean*> (&emailEnabled);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties(char* json)
{
	this->fromJson(json);
}

char*
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ConfigNodePropertyInteger")) {
		ConfigNodePropertyInteger obj = getThreshold();
		node = converttoJson(&obj, "ConfigNodePropertyInteger", "");
	}
	else {
		
		ConfigNodePropertyInteger obj = static_cast<ConfigNodePropertyInteger> (getThreshold());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *thresholdKey = "threshold";
	json_object_set_member(pJsonObject, thresholdKey, node);
	if (isprimitive("ConfigNodePropertyString")) {
		ConfigNodePropertyString obj = getJobTopicName();
		node = converttoJson(&obj, "ConfigNodePropertyString", "");
	}
	else {
		
		ConfigNodePropertyString obj = static_cast<ConfigNodePropertyString> (getJobTopicName());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *jobTopicNameKey = "jobTopicName";
	json_object_set_member(pJsonObject, jobTopicNameKey, node);
	if (isprimitive("ConfigNodePropertyBoolean")) {
		ConfigNodePropertyBoolean obj = getEmailEnabled();
		node = converttoJson(&obj, "ConfigNodePropertyBoolean", "");
	}
	else {
		
		ConfigNodePropertyBoolean obj = static_cast<ConfigNodePropertyBoolean> (getEmailEnabled());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *emailEnabledKey = "emailEnabled";
	json_object_set_member(pJsonObject, emailEnabledKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ConfigNodePropertyInteger
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::getThreshold()
{
	return threshold;
}

void
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::setThreshold(ConfigNodePropertyInteger  threshold)
{
	this->threshold = threshold;
}

ConfigNodePropertyString
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::getJobTopicName()
{
	return jobTopicName;
}

void
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::setJobTopicName(ConfigNodePropertyString  jobTopicName)
{
	this->jobTopicName = jobTopicName;
}

ConfigNodePropertyBoolean
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::getEmailEnabled()
{
	return emailEnabled;
}

void
ComAdobeCqWcmJobsAsyncImplAsyncPageMoveConfigProviderServiceProperties::setEmailEnabled(ConfigNodePropertyBoolean  emailEnabled)
{
	this->emailEnabled = emailEnabled;
}

