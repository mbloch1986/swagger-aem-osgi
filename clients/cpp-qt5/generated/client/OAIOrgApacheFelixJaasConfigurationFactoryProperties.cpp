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


#include "OAIOrgApacheFelixJaasConfigurationFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrgApacheFelixJaasConfigurationFactoryProperties::OAIOrgApacheFelixJaasConfigurationFactoryProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIOrgApacheFelixJaasConfigurationFactoryProperties::OAIOrgApacheFelixJaasConfigurationFactoryProperties() {
    init();
}

OAIOrgApacheFelixJaasConfigurationFactoryProperties::~OAIOrgApacheFelixJaasConfigurationFactoryProperties() {
    this->cleanup();
}

void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::init() {
    jaas_control_flag = new OAIConfigNodePropertyDropDown();
    m_jaas_control_flag_isSet = false;
    jaas_ranking = new OAIConfigNodePropertyInteger();
    m_jaas_ranking_isSet = false;
    jaas_realm_name = new OAIConfigNodePropertyString();
    m_jaas_realm_name_isSet = false;
    jaas_classname = new OAIConfigNodePropertyString();
    m_jaas_classname_isSet = false;
    jaas_options = new OAIConfigNodePropertyArray();
    m_jaas_options_isSet = false;
}

void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::cleanup() {
    if(jaas_control_flag != nullptr) { 
        delete jaas_control_flag;
    }
    if(jaas_ranking != nullptr) { 
        delete jaas_ranking;
    }
    if(jaas_realm_name != nullptr) { 
        delete jaas_realm_name;
    }
    if(jaas_classname != nullptr) { 
        delete jaas_classname;
    }
    if(jaas_options != nullptr) { 
        delete jaas_options;
    }
}

OAIOrgApacheFelixJaasConfigurationFactoryProperties*
OAIOrgApacheFelixJaasConfigurationFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&jaas_control_flag, pJson["jaas.controlFlag"], "OAIConfigNodePropertyDropDown", "OAIConfigNodePropertyDropDown");
    
    ::OpenAPI::setValue(&jaas_ranking, pJson["jaas.ranking"], "OAIConfigNodePropertyInteger", "OAIConfigNodePropertyInteger");
    
    ::OpenAPI::setValue(&jaas_realm_name, pJson["jaas.realmName"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jaas_classname, pJson["jaas.classname"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&jaas_options, pJson["jaas.options"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
}

QString
OAIOrgApacheFelixJaasConfigurationFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrgApacheFelixJaasConfigurationFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((jaas_control_flag != nullptr) && (jaas_control_flag->isSet())){
        toJsonValue(QString("jaas.controlFlag"), jaas_control_flag, obj, QString("OAIConfigNodePropertyDropDown"));
    }
    if((jaas_ranking != nullptr) && (jaas_ranking->isSet())){
        toJsonValue(QString("jaas.ranking"), jaas_ranking, obj, QString("OAIConfigNodePropertyInteger"));
    }
    if((jaas_realm_name != nullptr) && (jaas_realm_name->isSet())){
        toJsonValue(QString("jaas.realmName"), jaas_realm_name, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jaas_classname != nullptr) && (jaas_classname->isSet())){
        toJsonValue(QString("jaas.classname"), jaas_classname, obj, QString("OAIConfigNodePropertyString"));
    }
    if((jaas_options != nullptr) && (jaas_options->isSet())){
        toJsonValue(QString("jaas.options"), jaas_options, obj, QString("OAIConfigNodePropertyArray"));
    }

    return obj;
}

OAIConfigNodePropertyDropDown*
OAIOrgApacheFelixJaasConfigurationFactoryProperties::getJaasControlFlag() {
    return jaas_control_flag;
}
void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::setJaasControlFlag(OAIConfigNodePropertyDropDown* jaas_control_flag) {
    this->jaas_control_flag = jaas_control_flag;
    this->m_jaas_control_flag_isSet = true;
}

OAIConfigNodePropertyInteger*
OAIOrgApacheFelixJaasConfigurationFactoryProperties::getJaasRanking() {
    return jaas_ranking;
}
void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::setJaasRanking(OAIConfigNodePropertyInteger* jaas_ranking) {
    this->jaas_ranking = jaas_ranking;
    this->m_jaas_ranking_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheFelixJaasConfigurationFactoryProperties::getJaasRealmName() {
    return jaas_realm_name;
}
void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::setJaasRealmName(OAIConfigNodePropertyString* jaas_realm_name) {
    this->jaas_realm_name = jaas_realm_name;
    this->m_jaas_realm_name_isSet = true;
}

OAIConfigNodePropertyString*
OAIOrgApacheFelixJaasConfigurationFactoryProperties::getJaasClassname() {
    return jaas_classname;
}
void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::setJaasClassname(OAIConfigNodePropertyString* jaas_classname) {
    this->jaas_classname = jaas_classname;
    this->m_jaas_classname_isSet = true;
}

OAIConfigNodePropertyArray*
OAIOrgApacheFelixJaasConfigurationFactoryProperties::getJaasOptions() {
    return jaas_options;
}
void
OAIOrgApacheFelixJaasConfigurationFactoryProperties::setJaasOptions(OAIConfigNodePropertyArray* jaas_options) {
    this->jaas_options = jaas_options;
    this->m_jaas_options_isSet = true;
}


bool
OAIOrgApacheFelixJaasConfigurationFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(jaas_control_flag != nullptr && jaas_control_flag->isSet()){ isObjectUpdated = true; break;}
        if(jaas_ranking != nullptr && jaas_ranking->isSet()){ isObjectUpdated = true; break;}
        if(jaas_realm_name != nullptr && jaas_realm_name->isSet()){ isObjectUpdated = true; break;}
        if(jaas_classname != nullptr && jaas_classname->isSet()){ isObjectUpdated = true; break;}
        if(jaas_options != nullptr && jaas_options->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

