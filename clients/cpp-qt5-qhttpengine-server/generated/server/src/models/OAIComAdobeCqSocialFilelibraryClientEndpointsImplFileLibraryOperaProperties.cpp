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


#include "OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties(QString json) {
    this->fromJson(json);
}

OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties() {
    this->init();
}

OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::~OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties() {
    
}

void
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::init() {
    m_field_whitelist_isSet = false;
    m_attachment_type_blacklist_isSet = false;
}

void
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(field_whitelist, json[QString("fieldWhitelist")]);
    
    ::OpenAPI::fromJsonValue(attachment_type_blacklist, json[QString("attachmentTypeBlacklist")]);
    
}

QString
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::asJsonObject() const {
    QJsonObject obj;
	if(field_whitelist.isSet()){
        obj.insert(QString("fieldWhitelist"), ::OpenAPI::toJsonValue(field_whitelist));
    }
	if(attachment_type_blacklist.isSet()){
        obj.insert(QString("attachmentTypeBlacklist"), ::OpenAPI::toJsonValue(attachment_type_blacklist));
    }
    return obj;
}

OAIConfigNodePropertyArray
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::getFieldWhitelist() const {
    return field_whitelist;
}
void
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::setFieldWhitelist(const OAIConfigNodePropertyArray &field_whitelist) {
    this->field_whitelist = field_whitelist;
    this->m_field_whitelist_isSet = true;
}

OAIConfigNodePropertyArray
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::getAttachmentTypeBlacklist() const {
    return attachment_type_blacklist;
}
void
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::setAttachmentTypeBlacklist(const OAIConfigNodePropertyArray &attachment_type_blacklist) {
    this->attachment_type_blacklist = attachment_type_blacklist;
    this->m_attachment_type_blacklist_isSet = true;
}


bool
OAIComAdobeCqSocialFilelibraryClientEndpointsImplFileLibraryOperaProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(field_whitelist.isSet()){ isObjectUpdated = true; break;}
    
        if(attachment_type_blacklist.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
