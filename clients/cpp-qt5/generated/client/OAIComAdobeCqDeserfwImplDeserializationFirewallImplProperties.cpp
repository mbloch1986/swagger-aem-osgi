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


#include "OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties() {
    init();
}

OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::~OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties() {
    this->cleanup();
}

void
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::init() {
    firewall_deserialization_whitelist = new OAIConfigNodePropertyArray();
    m_firewall_deserialization_whitelist_isSet = false;
    firewall_deserialization_blacklist = new OAIConfigNodePropertyArray();
    m_firewall_deserialization_blacklist_isSet = false;
    firewall_deserialization_diagnostics = new OAIConfigNodePropertyString();
    m_firewall_deserialization_diagnostics_isSet = false;
}

void
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::cleanup() {
    if(firewall_deserialization_whitelist != nullptr) { 
        delete firewall_deserialization_whitelist;
    }
    if(firewall_deserialization_blacklist != nullptr) { 
        delete firewall_deserialization_blacklist;
    }
    if(firewall_deserialization_diagnostics != nullptr) { 
        delete firewall_deserialization_diagnostics;
    }
}

OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties*
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&firewall_deserialization_whitelist, pJson["firewall.deserialization.whitelist"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&firewall_deserialization_blacklist, pJson["firewall.deserialization.blacklist"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&firewall_deserialization_diagnostics, pJson["firewall.deserialization.diagnostics"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::asJsonObject() {
    QJsonObject obj;
    if((firewall_deserialization_whitelist != nullptr) && (firewall_deserialization_whitelist->isSet())){
        toJsonValue(QString("firewall.deserialization.whitelist"), firewall_deserialization_whitelist, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((firewall_deserialization_blacklist != nullptr) && (firewall_deserialization_blacklist->isSet())){
        toJsonValue(QString("firewall.deserialization.blacklist"), firewall_deserialization_blacklist, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((firewall_deserialization_diagnostics != nullptr) && (firewall_deserialization_diagnostics->isSet())){
        toJsonValue(QString("firewall.deserialization.diagnostics"), firewall_deserialization_diagnostics, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::getFirewallDeserializationWhitelist() {
    return firewall_deserialization_whitelist;
}
void
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::setFirewallDeserializationWhitelist(OAIConfigNodePropertyArray* firewall_deserialization_whitelist) {
    this->firewall_deserialization_whitelist = firewall_deserialization_whitelist;
    this->m_firewall_deserialization_whitelist_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::getFirewallDeserializationBlacklist() {
    return firewall_deserialization_blacklist;
}
void
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::setFirewallDeserializationBlacklist(OAIConfigNodePropertyArray* firewall_deserialization_blacklist) {
    this->firewall_deserialization_blacklist = firewall_deserialization_blacklist;
    this->m_firewall_deserialization_blacklist_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::getFirewallDeserializationDiagnostics() {
    return firewall_deserialization_diagnostics;
}
void
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::setFirewallDeserializationDiagnostics(OAIConfigNodePropertyString* firewall_deserialization_diagnostics) {
    this->firewall_deserialization_diagnostics = firewall_deserialization_diagnostics;
    this->m_firewall_deserialization_diagnostics_isSet = true;
}


bool
OAIComAdobeCqDeserfwImplDeserializationFirewallImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(firewall_deserialization_whitelist != nullptr && firewall_deserialization_whitelist->isSet()){ isObjectUpdated = true; break;}
        if(firewall_deserialization_blacklist != nullptr && firewall_deserialization_blacklist->isSet()){ isObjectUpdated = true; break;}
        if(firewall_deserialization_diagnostics != nullptr && firewall_deserialization_diagnostics->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

