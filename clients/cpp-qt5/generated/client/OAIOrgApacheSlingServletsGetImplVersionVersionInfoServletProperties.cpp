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


#include "OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties() {
    init();
}

OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::~OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties() {
    this->cleanup();
}

void
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::init() {
    sling_servlet_selectors = new OAIConfigNodePropertyArray();
    m_sling_servlet_selectors_isSet = false;
    ecma_suport = new OAIConfigNodePropertyBoolean();
    m_ecma_suport_isSet = false;
}

void
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::cleanup() {
    if(sling_servlet_selectors != nullptr) { 
        delete sling_servlet_selectors;
    }
    if(ecma_suport != nullptr) { 
        delete ecma_suport;
    }
}

OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties*
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&sling_servlet_selectors, pJson["sling.servlet.selectors"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&ecma_suport, pJson["ecmaSuport"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::asJsonObject() {
    QJsonObject obj;
    if((sling_servlet_selectors != nullptr) && (sling_servlet_selectors->isSet())){
        toJsonValue(QString("sling.servlet.selectors"), sling_servlet_selectors, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((ecma_suport != nullptr) && (ecma_suport->isSet())){
        toJsonValue(QString("ecmaSuport"), ecma_suport, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::getSlingServletSelectors() {
    return sling_servlet_selectors;
}
void
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::setSlingServletSelectors(OAIConfigNodePropertyArray* sling_servlet_selectors) {
    this->sling_servlet_selectors = sling_servlet_selectors;
    this->m_sling_servlet_selectors_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::getEcmaSuport() {
    return ecma_suport;
}
void
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::setEcmaSuport(OAIConfigNodePropertyBoolean* ecma_suport) {
    this->ecma_suport = ecma_suport;
    this->m_ecma_suport_isSet = true;
}


bool
OAIOrgApacheSlingServletsGetImplVersionVersionInfoServletProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(sling_servlet_selectors != nullptr && sling_servlet_selectors->isSet()){ isObjectUpdated = true; break;}
        if(ecma_suport != nullptr && ecma_suport->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

