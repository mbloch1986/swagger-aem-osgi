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


#include "OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties(QString json) {
    init();
    this->fromJson(json);
}

OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties() {
    init();
}

OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::~OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties() {
    this->cleanup();
}

void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::init() {
    cq_wcm_msm_action_excludednodetypes = new OAIConfigNodePropertyArray();
    m_cq_wcm_msm_action_excludednodetypes_isSet = false;
    cq_wcm_msm_action_excludedparagraphitems = new OAIConfigNodePropertyArray();
    m_cq_wcm_msm_action_excludedparagraphitems_isSet = false;
    cq_wcm_msm_action_excludedprops = new OAIConfigNodePropertyArray();
    m_cq_wcm_msm_action_excludedprops_isSet = false;
    cq_wcm_msm_impl_action_referencesupdate_prop_update_nested = new OAIConfigNodePropertyBoolean();
    m_cq_wcm_msm_impl_action_referencesupdate_prop_update_nested_isSet = false;
}

void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::cleanup() {
    if(cq_wcm_msm_action_excludednodetypes != nullptr) { 
        delete cq_wcm_msm_action_excludednodetypes;
    }
    if(cq_wcm_msm_action_excludedparagraphitems != nullptr) { 
        delete cq_wcm_msm_action_excludedparagraphitems;
    }
    if(cq_wcm_msm_action_excludedprops != nullptr) { 
        delete cq_wcm_msm_action_excludedprops;
    }
    if(cq_wcm_msm_impl_action_referencesupdate_prop_update_nested != nullptr) { 
        delete cq_wcm_msm_impl_action_referencesupdate_prop_update_nested;
    }
}

OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties*
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&cq_wcm_msm_action_excludednodetypes, pJson["cq.wcm.msm.action.excludednodetypes"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&cq_wcm_msm_action_excludedparagraphitems, pJson["cq.wcm.msm.action.excludedparagraphitems"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&cq_wcm_msm_action_excludedprops, pJson["cq.wcm.msm.action.excludedprops"], "OAIConfigNodePropertyArray", "OAIConfigNodePropertyArray");
    
    ::OpenAPI::setValue(&cq_wcm_msm_impl_action_referencesupdate_prop_update_nested, pJson["cq.wcm.msm.impl.action.referencesupdate.prop_updateNested"], "OAIConfigNodePropertyBoolean", "OAIConfigNodePropertyBoolean");
    
}

QString
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::asJsonObject() {
    QJsonObject obj;
    if((cq_wcm_msm_action_excludednodetypes != nullptr) && (cq_wcm_msm_action_excludednodetypes->isSet())){
        toJsonValue(QString("cq.wcm.msm.action.excludednodetypes"), cq_wcm_msm_action_excludednodetypes, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((cq_wcm_msm_action_excludedparagraphitems != nullptr) && (cq_wcm_msm_action_excludedparagraphitems->isSet())){
        toJsonValue(QString("cq.wcm.msm.action.excludedparagraphitems"), cq_wcm_msm_action_excludedparagraphitems, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((cq_wcm_msm_action_excludedprops != nullptr) && (cq_wcm_msm_action_excludedprops->isSet())){
        toJsonValue(QString("cq.wcm.msm.action.excludedprops"), cq_wcm_msm_action_excludedprops, obj, QString("OAIConfigNodePropertyArray"));
    }
    if((cq_wcm_msm_impl_action_referencesupdate_prop_update_nested != nullptr) && (cq_wcm_msm_impl_action_referencesupdate_prop_update_nested->isSet())){
        toJsonValue(QString("cq.wcm.msm.impl.action.referencesupdate.prop_updateNested"), cq_wcm_msm_impl_action_referencesupdate_prop_update_nested, obj, QString("OAIConfigNodePropertyBoolean"));
    }

    return obj;
}

OAIConfigNodePropertyArray*
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::getCqWcmMsmActionExcludednodetypes() {
    return cq_wcm_msm_action_excludednodetypes;
}
void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::setCqWcmMsmActionExcludednodetypes(OAIConfigNodePropertyArray* cq_wcm_msm_action_excludednodetypes) {
    this->cq_wcm_msm_action_excludednodetypes = cq_wcm_msm_action_excludednodetypes;
    this->m_cq_wcm_msm_action_excludednodetypes_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::getCqWcmMsmActionExcludedparagraphitems() {
    return cq_wcm_msm_action_excludedparagraphitems;
}
void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::setCqWcmMsmActionExcludedparagraphitems(OAIConfigNodePropertyArray* cq_wcm_msm_action_excludedparagraphitems) {
    this->cq_wcm_msm_action_excludedparagraphitems = cq_wcm_msm_action_excludedparagraphitems;
    this->m_cq_wcm_msm_action_excludedparagraphitems_isSet = true;
}

OAIConfigNodePropertyArray*
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::getCqWcmMsmActionExcludedprops() {
    return cq_wcm_msm_action_excludedprops;
}
void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::setCqWcmMsmActionExcludedprops(OAIConfigNodePropertyArray* cq_wcm_msm_action_excludedprops) {
    this->cq_wcm_msm_action_excludedprops = cq_wcm_msm_action_excludedprops;
    this->m_cq_wcm_msm_action_excludedprops_isSet = true;
}

OAIConfigNodePropertyBoolean*
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::getCqWcmMsmImplActionReferencesupdatePropUpdateNested() {
    return cq_wcm_msm_impl_action_referencesupdate_prop_update_nested;
}
void
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::setCqWcmMsmImplActionReferencesupdatePropUpdateNested(OAIConfigNodePropertyBoolean* cq_wcm_msm_impl_action_referencesupdate_prop_update_nested) {
    this->cq_wcm_msm_impl_action_referencesupdate_prop_update_nested = cq_wcm_msm_impl_action_referencesupdate_prop_update_nested;
    this->m_cq_wcm_msm_impl_action_referencesupdate_prop_update_nested_isSet = true;
}


bool
OAIComDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties::isSet(){
    bool isObjectUpdated = false;
    do{
        if(cq_wcm_msm_action_excludednodetypes != nullptr && cq_wcm_msm_action_excludednodetypes->isSet()){ isObjectUpdated = true; break;}
        if(cq_wcm_msm_action_excludedparagraphitems != nullptr && cq_wcm_msm_action_excludedparagraphitems->isSet()){ isObjectUpdated = true; break;}
        if(cq_wcm_msm_action_excludedprops != nullptr && cq_wcm_msm_action_excludedprops->isSet()){ isObjectUpdated = true; break;}
        if(cq_wcm_msm_impl_action_referencesupdate_prop_update_nested != nullptr && cq_wcm_msm_impl_action_referencesupdate_prop_update_nested->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

