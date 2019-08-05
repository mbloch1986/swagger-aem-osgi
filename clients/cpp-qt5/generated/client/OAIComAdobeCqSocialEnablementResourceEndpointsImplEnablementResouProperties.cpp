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


#include "OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties() {
    init();
}

OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::~OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::init() {
    field_whitelist = new OAIConfigNodePropertyArray();
    m_field_whitelist_isSet = false;
}

void
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::cleanup() {
    if(field_whitelist != nullptr) { 
        delete field_whitelist;
    }
}

OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties*
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&field_whitelist, pJson["fieldWhitelist"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::asJsonObject() {
    QJsonObject obj;
    if((field_whitelist != nullptr) && (field_whitelist->isSet())){
        toJsonValue(QString("fieldWhitelist"), field_whitelist, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::getFieldWhitelist() {
    return field_whitelist;
}
void
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::setFieldWhitelist(OAIConfigNodePropertyArray* field_whitelist) {
    this->field_whitelist = field_whitelist;
    this->m_field_whitelist_isSet = true;
}


bool
OAIComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(field_whitelist != nullptr && field_whitelist->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
