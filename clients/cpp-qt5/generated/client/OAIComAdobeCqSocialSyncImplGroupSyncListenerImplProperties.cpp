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


#include "OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties() {
    init();
}

OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::~OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties() {
    this->cleanup();
}

void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::init() {
    nodetypes = new OAIConfigNodePropertyArray();
    m_nodetypes_isSet = false;
    ignorableprops = new OAIConfigNodePropertyArray();
    m_ignorableprops_isSet = false;
    ignorablenodes = new OAIConfigNodePropertyString();
    m_ignorablenodes_isSet = false;
    enabled = new OAIConfigNodePropertyBoolean();
    m_enabled_isSet = false;
    distfolders = new OAIConfigNodePropertyString();
    m_distfolders_isSet = false;
}

void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::cleanup() {
    if(nodetypes != nullptr) { 
        delete nodetypes;
    }
    if(ignorableprops != nullptr) { 
        delete ignorableprops;
    }
    if(ignorablenodes != nullptr) { 
        delete ignorablenodes;
    }
    if(enabled != nullptr) { 
        delete enabled;
    }
    if(distfolders != nullptr) { 
        delete distfolders;
    }
}

OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties*
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&nodetypes, pJson["nodetypes"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&ignorableprops, pJson["ignorableprops"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&ignorablenodes, pJson["ignorablenodes"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
    ::OpenAPI::setValue(&distfolders, pJson["distfolders"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::asJsonObject() {
    QJsonObject obj;
    if((nodetypes != nullptr) && (nodetypes->isSet())){
        toJsonValue(QString("nodetypes"), nodetypes, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((ignorableprops != nullptr) && (ignorableprops->isSet())){
        toJsonValue(QString("ignorableprops"), ignorableprops, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((ignorablenodes != nullptr) && (ignorablenodes->isSet())){
        toJsonValue(QString("ignorablenodes"), ignorablenodes, obj, QString("OAIConfigNodePropertyString"));
    }
    if((enabled != nullptr) && (enabled->isSet())){
        toJsonValue(QString("enabled"), enabled, obj, QString("OAIConfigNodePropertyBoolean"));
    }
    if((distfolders != nullptr) && (distfolders->isSet())){
        toJsonValue(QString("distfolders"), distfolders, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getNodetypes() {
    return nodetypes;
}
void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setNodetypes(OAIConfigNodePropertyArray* nodetypes) {
    this->nodetypes = nodetypes;
    this->m_nodetypes_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getIgnorableprops() {
    return ignorableprops;
}
void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setIgnorableprops(OAIConfigNodePropertyArray* ignorableprops) {
    this->ignorableprops = ignorableprops;
    this->m_ignorableprops_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getIgnorablenodes() {
    return ignorablenodes;
}
void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setIgnorablenodes(OAIConfigNodePropertyString* ignorablenodes) {
    this->ignorablenodes = ignorablenodes;
    this->m_ignorablenodes_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getEnabled() {
    return enabled;
}
void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setEnabled(OAIConfigNodePropertyBoolean* enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::getDistfolders() {
    return distfolders;
}
void
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::setDistfolders(OAIConfigNodePropertyString* distfolders) {
    this->distfolders = distfolders;
    this->m_distfolders_isSet = true;
}


bool
OAIComAdobeCqSocialSyncImplGroupSyncListenerImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(nodetypes != nullptr && nodetypes->isSet()){ isObjectUpdated = true; break;}
        if(ignorableprops != nullptr && ignorableprops->isSet()){ isObjectUpdated = true; break;}
        if(ignorablenodes != nullptr && ignorablenodes->isSet()){ isObjectUpdated = true; break;}
        if(enabled != nullptr && enabled->isSet()){ isObjectUpdated = true; break;}
        if(distfolders != nullptr && distfolders->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

