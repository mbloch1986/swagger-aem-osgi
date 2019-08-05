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


#include "OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties() {
    init();
}

OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::~OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties() {
    this->cleanup();
}

void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::init() {
    dam_cfm_component_resource_type = new OAIConfigNodePropertyString();
    m_dam_cfm_component_resource_type_isSet = false;
    dam_cfm_component_file_reference_prop = new OAIConfigNodePropertyString();
    m_dam_cfm_component_file_reference_prop_isSet = false;
    dam_cfm_component_elements_prop = new OAIConfigNodePropertyString();
    m_dam_cfm_component_elements_prop_isSet = false;
    dam_cfm_component_variation_prop = new OAIConfigNodePropertyString();
    m_dam_cfm_component_variation_prop_isSet = false;
}

void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::cleanup() {
    if(dam_cfm_component_resource_type != nullptr) { 
        delete dam_cfm_component_resource_type;
    }
    if(dam_cfm_component_file_reference_prop != nullptr) { 
        delete dam_cfm_component_file_reference_prop;
    }
    if(dam_cfm_component_elements_prop != nullptr) { 
        delete dam_cfm_component_elements_prop;
    }
    if(dam_cfm_component_variation_prop != nullptr) { 
        delete dam_cfm_component_variation_prop;
    }
}

OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties*
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&dam_cfm_component_resource_type, pJson["dam.cfm.component.resourceType"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&dam_cfm_component_file_reference_prop, pJson["dam.cfm.component.fileReferenceProp"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&dam_cfm_component_elements_prop, pJson["dam.cfm.component.elementsProp"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
    ::OpenAPI::setValue(&dam_cfm_component_variation_prop, pJson["dam.cfm.component.variationProp"], "OAIConfigNodePropertyString", "OAIConfigNodePropertyString");
    
}

QString
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::asJsonObject() {
    QJsonObject obj;
    if((dam_cfm_component_resource_type != nullptr) && (dam_cfm_component_resource_type->isSet())){
        toJsonValue(QString("dam.cfm.component.resourceType"), dam_cfm_component_resource_type, obj, QString("OAIConfigNodePropertyString"));
    }
    if((dam_cfm_component_file_reference_prop != nullptr) && (dam_cfm_component_file_reference_prop->isSet())){
        toJsonValue(QString("dam.cfm.component.fileReferenceProp"), dam_cfm_component_file_reference_prop, obj, QString("OAIConfigNodePropertyString"));
    }
    if((dam_cfm_component_elements_prop != nullptr) && (dam_cfm_component_elements_prop->isSet())){
        toJsonValue(QString("dam.cfm.component.elementsProp"), dam_cfm_component_elements_prop, obj, QString("OAIConfigNodePropertyString"));
    }
    if((dam_cfm_component_variation_prop != nullptr) && (dam_cfm_component_variation_prop->isSet())){
        toJsonValue(QString("dam.cfm.component.variationProp"), dam_cfm_component_variation_prop, obj, QString("OAIConfigNodePropertyString"));
    }

    return obj;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::getDamCfmComponentResourceType() {
    return dam_cfm_component_resource_type;
}
void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::setDamCfmComponentResourceType(OAIConfigNodePropertyString* dam_cfm_component_resource_type) {
    this->dam_cfm_component_resource_type = dam_cfm_component_resource_type;
    this->m_dam_cfm_component_resource_type_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::getDamCfmComponentFileReferenceProp() {
    return dam_cfm_component_file_reference_prop;
}
void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::setDamCfmComponentFileReferenceProp(OAIConfigNodePropertyString* dam_cfm_component_file_reference_prop) {
    this->dam_cfm_component_file_reference_prop = dam_cfm_component_file_reference_prop;
    this->m_dam_cfm_component_file_reference_prop_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::getDamCfmComponentElementsProp() {
    return dam_cfm_component_elements_prop;
}
void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::setDamCfmComponentElementsProp(OAIConfigNodePropertyString* dam_cfm_component_elements_prop) {
    this->dam_cfm_component_elements_prop = dam_cfm_component_elements_prop;
    this->m_dam_cfm_component_elements_prop_isSet = true;
}

OAIConfigNodePropertyString*
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::getDamCfmComponentVariationProp() {
    return dam_cfm_component_variation_prop;
}
void
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::setDamCfmComponentVariationProp(OAIConfigNodePropertyString* dam_cfm_component_variation_prop) {
    this->dam_cfm_component_variation_prop = dam_cfm_component_variation_prop;
    this->m_dam_cfm_component_variation_prop_isSet = true;
}


bool
OAIComAdobeCqDamCfmImplComponentComponentConfigImplProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(dam_cfm_component_resource_type != nullptr && dam_cfm_component_resource_type->isSet()){ isObjectUpdated = true; break;}
        if(dam_cfm_component_file_reference_prop != nullptr && dam_cfm_component_file_reference_prop->isSet()){ isObjectUpdated = true; break;}
        if(dam_cfm_component_elements_prop != nullptr && dam_cfm_component_elements_prop->isSet()){ isObjectUpdated = true; break;}
        if(dam_cfm_component_variation_prop != nullptr && dam_cfm_component_variation_prop->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
