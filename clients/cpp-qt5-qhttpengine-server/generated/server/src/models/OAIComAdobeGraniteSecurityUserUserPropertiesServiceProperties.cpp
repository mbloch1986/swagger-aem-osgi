/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties() {
    this->init();
}

OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::~OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties() {
    
}

void
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::init() {
    m_adapter_condition_isSet = false;
    m_granite_userproperties_nodetypes_isSet = false;
    m_granite_userproperties_resourcetypes_isSet = false;
}

void
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(adapter_condition, json[QString("adapter.condition")]);
    
    ::OpenAPI::fromJsonValue(granite_userproperties_nodetypes, json[QString("granite.userproperties.nodetypes")]);
    
    ::OpenAPI::fromJsonValue(granite_userproperties_resourcetypes, json[QString("granite.userproperties.resourcetypes")]);
    
}

QString
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::asJsonObject() const {
    QJsonObject obj;
	if(adapter_condition.isSet()){
        obj.insert(QString("adapter.condition"), ::OpenAPI::toJsonValue(adapter_condition));
    }
	if(granite_userproperties_nodetypes.isSet()){
        obj.insert(QString("granite.userproperties.nodetypes"), ::OpenAPI::toJsonValue(granite_userproperties_nodetypes));
    }
	if(granite_userproperties_resourcetypes.isSet()){
        obj.insert(QString("granite.userproperties.resourcetypes"), ::OpenAPI::toJsonValue(granite_userproperties_resourcetypes));
    }
    return obj;
}

OAIConfigNodePropertyString
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::getAdapterCondition() const {
    return adapter_condition;
}
void
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::setAdapterCondition(const OAIConfigNodePropertyString &adapter_condition) {
    this->adapter_condition = adapter_condition;
    this->m_adapter_condition_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::getGraniteUserpropertiesNodetypes() const {
    return granite_userproperties_nodetypes;
}
void
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::setGraniteUserpropertiesNodetypes(const OAIConfigNodePropertyArray &granite_userproperties_nodetypes) {
    this->granite_userproperties_nodetypes = granite_userproperties_nodetypes;
    this->m_granite_userproperties_nodetypes_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::getGraniteUserpropertiesResourcetypes() const {
    return granite_userproperties_resourcetypes;
}
void
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::setGraniteUserpropertiesResourcetypes(const OAIConfigNodePropertyArray &granite_userproperties_resourcetypes) {
    this->granite_userproperties_resourcetypes = granite_userproperties_resourcetypes;
    this->m_granite_userproperties_resourcetypes_isSet = true;
}


bool
OAIComAdobeGraniteSecurityUserUserPropertiesServiceProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(adapter_condition.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_userproperties_nodetypes.isSet()){ isObjectUpdated = true; break;}
    
        if(granite_userproperties_resourcetypes.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

